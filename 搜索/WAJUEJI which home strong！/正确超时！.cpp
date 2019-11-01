



















//¹ûÈ»³¬Ê± 

#include "stdio.h"
int n,m;
bool book[100][100];
char a[101][101];
int re,endx,endy;
int next[4][2]={{0,1},{1,0},{0,-1},{-1,0}};
bool ok;
int main(){
	int t,i,j,k,sx,sy;
	void dfs(int x,int y,int sum);
	char c[102];
	scanf("%d",&t);
	for(i=0;i<t;i++){
		ok=0;
		re=99999999;
		scanf("%d %d",&n,&m);
		for(j=0;j<n;j++)
		for(k=0;k<m;k++)
		book[j][k]=0;
		for(j=0;j<n;j++)
		{
			scanf("%s",&c);
			for(k=0;c[k]!='\0';k++){
				a[j][k]=c[k];
				if(a[j][k]=='s')
				{
					sx=j;
					sy=k;
				}
				else if(a[j][k]=='l'){
					endx=j;
					endy=k;
				}
			}
		}
		book[sx][sy]=1;
		dfs(sx,sy,0);
		if(ok)
		printf("%d\n",re);
		else
		printf("-1\n");
	}
	return 0;
}
void dfs(int x,int y,int sum){
	if(x==endx&&y==endy){
		if(sum<re){
		re=sum;
	  	ok=1;
	}
	  return ;
	}
	int i;
	for(i=0;i<4;i++){
		int ax=x+next[i][0];
		int ay=y+next[i][1];
		if(ax<0||ax>=n||ay<0||ay>=m||book[ax][ay]==1||a[ax][ay]=='#')
		continue;
		book[ax][ay]=1;
		if(a[ax][ay]!='l')
		dfs(ax,ay,sum+a[ax][ay]-'A'+1);
		else
		dfs(ax,ay,sum);
		book[ax][ay]=0;
	}
}




