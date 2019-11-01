

//好乱 应该不能实现 
#include "stdio.h"
int main(){
	int next[4][2]={{-1,0},{0,1},{1,0},{0,-1}}; //上右下左 
	int n,m;
	int t,i,j,k,l,sx,sy,ex,ey;
	char a[102][102];
	char c[102];
	int u[40001],v[40001],w[40001],dis[10001];
	scanf("%d",&t);
	for(i=0;i<t;i++){
		scanf("%d %d",&n,&m);
		int N=n*m,M=0,start,end;	
		for(j=1;j<=n;j++)
		{
			scanf("%s",&c);
			for(k=0;c[k]!='\0';k++){
				a[j][k+1]=c[k];
	
				if(a[j][k+1]=='s')
				{
					sx=j;
					sy=k+1;
					start=(j-1)*m+k+1;
				}
				else if(a[j][k+1]=='l'){
					ex=j;
					ey=k+1;
					end=(j-1)*m+k+1;
				}
			}
		}
	   for(j=1;j<=n;j++)
	   for(k=1;k<=m;k++){
	   	if(a[j][k]=='#')
	   	continue;
		for(l=0;l<4;l++){
			int ax=j+next[l][0];
			int ay=k+next[l][1];
			if(ax<0||ax>n||ay<0||ay>m||a[ax][ay]=='#')
			continue;
			u[M]=(j-1)*m+k;
			v[M]=(ax-1)*m+ay;
			 if(a[ax][ay]=='s')
			  	w[M]=0;
			else if(a[ax][ay]=='l')
			  	w[M]=0;
			else
			w[M]=a[ax][ay]-'A'+1;
			M++;
		}
	}
				
       for(j=1;j<=N;j++){
       	dis[j]=99999999;
       }
       dis[start]=0;
		
		for(j=1;j<N-1;j++)
		for(k=0;k<M;k++)
		if(dis[v[k]]>dis[u[k]]+w[k])
		dis[v[k]]=dis[u[k]]+w[k];
		
		printf("%d\n",dis[end]);
	}
	return 0;
}


