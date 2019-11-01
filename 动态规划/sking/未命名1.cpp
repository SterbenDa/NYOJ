#include <iostream>
#include <cstdio>
#include <string.h>
#include <algorithm>
using namespace std;
const int N=100+100;
int next[4][2]={{0,1},{1,0},{-1,0},{0,-1}};
int n,m;
int map[N][N];
int book[N][N];
int dfs(int x,int y){
	if(book[x][y]!=0)    //DP了 
	  return book[x][y];
	int i;
	bool ok=0;
	for(i=0;i<4;i++){
		int a=x+next[i][0];
		int b=y+next[i][1];
		if(a<0||a>=n||b<0||b>=m||map[a][b]>=map[x][y])
		continue;
		ok=1;
		book[x][y]=max(dfs(a,b),book[x][y]);
	}
	if(ok==0)      //四周都比自己大 
	return book[x][y]=1;
	return ++book[x][y];  //自己本身算一次 
}
int main(){
	int i,j,big,t;
	scanf("%d",&t);
	while(t--){
		scanf("%d%d",&n,&m);
		big=-99999999;
		for(i=0;i<n;i++)
		for(j=0;j<m;j++){
			scanf("%d",&map[i][j]);
			book[i][j]=0;
		}
		
		for(i=0;i<n;i++)
		for(j=0;j<m;j++){
			int tmp=dfs(i,j);
			if(tmp>big)
			big=tmp;
		}		
	/*	for(i=0;i<n;i++){
				for(j=0;j<m;j++)
		printf("%2d ",book[i][j]) ;
		printf("\n");
		}
	*/
		printf("%d\n",big);
	}
	return 0;
}
