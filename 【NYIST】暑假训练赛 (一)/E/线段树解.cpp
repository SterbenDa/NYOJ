#include <cstring>
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <time.h>
#include <algorithm>
using namespace std;
const int Max=8e4+10;
struct lt
{
    int l,r,d;
    long long sum,lazy;
};
bool cmp(lt a,lt b)
{
    return a.sum<b.sum;
}
lt rt[Max<<2];
int sum;
bool mark[Max<<1];
void build(int i,int l,int r)
{
    rt[i].l=l;
    rt[i].r=r;
    rt[i].sum=0;
    rt[i].lazy=0;
    rt[i].d=0;
    if(l+1>=r)
        return ;
    int mid=(l+r)>>1;
    build(i<<1,l,mid);
    build(i<<1|1,mid,r);
}
void updata(int i)
{
    if(rt[i].lazy)
    {
        rt[i<<1].lazy+=rt[i].lazy;
        rt[i<<1|1].lazy+=rt[i].lazy;
        rt[i<<1].sum+=(rt[i<<1].r-rt[i<<1].l)*rt[i].lazy;
        rt[i<<1|1].sum+=(rt[i<<1|1].r-rt[i<<1|1].l)*rt[i].lazy;
        rt[i<<1].d=rt[i<<1|1].d=rt[i].d;
        rt[i].lazy=0;
    }
}
void add(int i,int l,int r,int sum,int d)
{
    if(l>=rt[i].r||r<=rt[i].l)
        return ;
    if(l<=rt[i].l&&r>=rt[i].r)
    {
        rt[i].sum+=(rt[i].r-rt[i].l)*sum;
        rt[i].lazy+=sum;
        rt[i].d=d;
        return ;
    }
    updata(i);
    add(i<<1,l,r,sum,d);
    add(i<<1|1,l,r,sum,d);
    rt[i].sum=rt[i<<1].sum+rt[i<<1|1].sum;
}
long long find(int i,int l,int r)
{
    if(l>=rt[i].r||r<=rt[i].l)
        return 0;
    long long ans=0;
    if(l<=rt[i].l&&r>=rt[i].r)
        return rt[i].sum;
    updata(i);
    ans+=find(i<<1,l,r);
    ans+=find(i<<1|1,l,r);
    rt[i].sum=rt[i<<1].sum+rt[i<<1|1].sum;
    return ans;
}
void quanb(int i)
{
    if(rt[i].l+1>=rt[i].r)
    {
        if(rt[i].d&&!mark[rt[i].d])
        {
            mark[rt[i].d]=1;
            sum++;
        }
        return ;
    }
    updata(i);
    quanb(i<<1);
    quanb(i<<1|1);
    rt[i].sum=rt[i<<1].sum+rt[i<<1|1].sum;
}
void shuru(long long &a)
{
    a=0;
    char ch;
    while((ch=getchar())>'9'||ch<'0');
    a=ch-'0';
    while((ch=getchar())<='9'&&ch>='0')
        a=a*10+ch-'0';
}
void shuru(int &a)
{
    a=0;
    char ch;
    while((ch=getchar())>'9'||ch<'0');
    a=ch-'0';
    while((ch=getchar())<='9'&&ch>='0')
        a=a*10+ch-'0';
}
int main()
{
    int n,m;
    while(~scanf("%d%d",&n,&m))
    {
        memset(mark,0,sizeof(mark));
        lt a;
        build(1,1,n);
        for(int i=1; i<=m; ++i)
        {
            shuru(a.lazy);
            shuru(a.l);
            shuru(a.r);
            if(a.lazy==1)
            {
                shuru(a.d);
                shuru(a.sum);
                add(1,a.l,a.r,a.sum,a.d);
            }
            else
                printf("%lld\n",find(1,a.l,a.r));
        }
        sum=0;
        quanb(1);
        printf("%lld %d\n",rt[1].sum,sum);
    }
    return 0;
}
