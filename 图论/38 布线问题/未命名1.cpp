#include <iostream>
#include <cstdio>
#include <string.h>
#include <algorithm>
using namespace std;
const int N=500+10;
const int M=N*(N-1)/2 ;
struct Node{
	int s,end,w;
}node[M];
bool cmp(Node a,Node b){
	return a.w<b.w;
}
int pre[N],n,m;
int find(int x){
	int r=x;
	while(pre[r]!=r)
	  r=pre[r];
	  int i=x,j;
	  while(i!=r){
	  	j=pre[i];
	  	pre[i]=r;  
	  	i=j;
	  }
	  return r;
}
inline void Init(int n){
	for(int i=1;i<=n;i++)
	  pre[i]=i;
}
inline bool join(int x,int y){
	int fx=find(x);
	int fy=find(y);
	if(fx!=fy){
		     //��x��y����ͳһ������
		pre[fx]=fy;	
		return true;
	}  
	return false;
}
int kruskal()
{
    int i,count1=1,sum=0;
    Init(n);     //���鼯��ʼ����ÿ���ڵ㵽�������Լ�
    //int x,y;
     sort(node,node+m,cmp);   //��������
    for(i=0;count1<n;i++) {  //��С������ n���� ��n-1���� 
    if(join(node[i].s,node[i].end)){
    	sum+=node[i].w; 
		count1++;   //����һ���� 
	}    
}
       // x=find(edge[i].s);  //��edge[i].u�ĸ�����x
       // y=find(edge[i].end);  //��edge[i].v�ĸ�����y      
      /*  if(x!=y)  //�ж��Ƿ��·
        {
            count++;  //����һ����
            p[x]=y;     //��x��y����ͳһ������
            sum+=edge[i].w;
        }*/      
    return sum;
}
int main(){
	int t,i,j,small;
	scanf("%d",&t);
	while(t--){
		small=99999999;
		scanf("%d%d",&n,&m);
		for(i=0;i<m;i++)
			 scanf("%d%d%d",&node[i].s,&node[i].end,&node[i].w);
		for(i=0;i<n;i++){
			scanf("%d",&j);
			if(small>j)
			 small=j;
		}			
		 printf("%d\n",kruskal()+small);
	}
	return 0;
}
