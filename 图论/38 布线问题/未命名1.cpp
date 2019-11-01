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
		     //把x和y加入统一个集合
		pre[fx]=fy;	
		return true;
	}  
	return false;
}
int kruskal()
{
    int i,count1=1,sum=0;
    Init(n);     //并查集初始化，每个节点到父亲是自己
    //int x,y;
     sort(node,node+m,cmp);   //快速排序
    for(i=0;count1<n;i++) {  //最小生成树 n个点 就n-1条边 
    if(join(node[i].s,node[i].end)){
    	sum+=node[i].w; 
		count1++;   //加上一条边 
	}    
}
       // x=find(edge[i].s);  //点edge[i].u的父亲是x
       // y=find(edge[i].end);  //点edge[i].v的父亲是y      
      /*  if(x!=y)  //判断是否会路
        {
            count++;  //加上一条边
            p[x]=y;     //把x和y加入统一个集合
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
