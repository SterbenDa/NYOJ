#include "iostream"
#include "queue"
#include "stdio.h"
using namespace std;
struct now{
	int x,y;
	int step;
};
bool operator <(now a,now b){
   return a.step>b.step;
}
int main(){
	int n,m,i,j;
	bool book[302][302];
	char map[302][302];
	char line[302];
	int next[4][2]={{-1,0},{0,1},{1,0},{0,-1}};
	int bx,by;
	now haha; 
	while(scanf("%d %d",&n,&m)==2){
		if(n==0&&m==0)
		break;
		for(i=1;i<=n;i++){
			scanf("%s",line);
		 for(j=0;j<m;j++){
		     map[i][j+1]=line[j];
		 	book[i][j+1]=0;
		 	if(map[i][j+1]=='Y')
		 	{
		 		bx=i;by=j+1;
		 	}
		 }
	}
		 haha.x=bx;
		 haha.y=by;
		 haha.step=0;
		 book[bx][by]=1;
		 priority_queue<now> q;
		 q.push(haha);
		 bool ok=0;
		 while(!q.empty()){
		 	now tmp=q.top();
		 	q.pop();
		 	for(i=0;i<4;i++){
		 		int ax=tmp.x+next[i][0];
		 		int ay=tmp.y+next[i][1];
		 		if(ax<1||ax>n||ay<1||ay>m||map[ax][ay]=='S'||map[ax][ay]=='R'||
				 book[ax][ay]==1)
		 		continue;
		 		if(map[ax][ay]=='T'){
		 			ok=1;
		 			break;
		 		}
		 		now nex;
		 		nex.x=ax;
		 		nex.y=ay;
		 		book[ax][ay]=1;
		 		if(map[ax][ay]=='B')
		 		nex.step=tmp.step+2;
		 		else if(map[ax][ay]=='E')
		 		nex.step=tmp.step+1;
		 		q.push(nex);
		 	}
		 	if(ok){
		 		printf("%d\n",tmp.step+1);
		 		break;
		 	}
		 }
		 if(ok==0)
		 	printf("-1\n");
	}	
	return 0;
}



