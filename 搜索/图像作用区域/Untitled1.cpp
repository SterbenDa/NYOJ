#include "iostream"
#include "queue"
using namespace std;
int n,m;
int map[1000][1500];
int next[4][2]={{-1,0},{0,1},{1,0},{0,-1}};
struct Node{
	int x,y;
};
queue<Node> q;
int main(){
	void bfs(int x,int y);
	int num,i,j;
	cin>>num;
	while(num--){
		cin>>m>>n;
		for(i=0;i<n;i++)
		for(j=0;j<m;j++)
		cin>>map[i][j];

	 for(i=0;i<m;i++){
	  if(map[0][i]!=0){
	  	map[0][i]=0;
	  	bfs(0,i);
	}
	if(map[n-1][i]!=0){
	  	map[n-1][i]=0;
	  	bfs(n-1,i);
	}
}
	   for(i=0;i<n;i++){
	  if(map[i][0]!=0){
	  	map[i][0]=0;
	  	bfs(i,0);
	}
	 if(map[i][m-1]!=0){
	  	map[i][m-1]=0;
	  	bfs(i,m-1);
	}
}
      	for(i=0;i<n;i++){
		for(j=0;j<m;j++)
		cout<<map[i][j]<<" ";
		cout<<endl;
	}
	}
	return 0;
}
void bfs(int x,int y){
	int i;
	Node node;
	node.x=x;
	node.y=y;
	q.push(node);
     while(!q.empty()){
     	 Node tmp=q.front();
     	 q.pop();
     	 for(i=0;i<4;i++){
		int ax=tmp.x+next[i][0];
		int ay=tmp.y+next[i][1];
		if(map[ax][ay]==0||ax<0||ax>=n||ay>=m||ay<0)
		continue;
		map[ax][ay]=0;
		 node.x=ax;
		 node.y=ay;
		 q.push(node);
	}
	}
}


/*Õ»Òç³ö ÓÃbfsÊÔÊÔ 
#include "iostream"
using namespace std;
int n,m;
int map[1000][1500];
int next[4][2]={{-1,0},{0,1},{1,0},{0,-1}};
int main(){
	void dfs(int x,int y);
	int num,i,j;
	cin>>num;
	while(num--){
		cin>>m>>n;
		for(i=0;i<n;i++)
		for(j=0;j<m;j++)
		cin>>map[i][j];

	 for(i=0;i<m;i++){
	  if(map[0][i]!=0){
	  	map[0][i]=0;
	  	dfs(0,i);
	}
	if(map[n-1][i]!=0){
	  	map[n-1][i]=0;
	  	dfs(n-1,i);
	}
}
	   for(i=0;i<n;i++){
	  if(map[i][0]!=0){
	  	map[i][0]=0;
	  	dfs(i,0);
	}
	 if(map[i][m-1]!=0){
	  	map[i][m-1]=0;
	  	dfs(i,m-1);
	}
}
      	for(i=0;i<n;i++){
		for(j=0;j<m;j++)
		cout<<map[i][j]<<" ";
		cout<<endl;
	}
	}
	return 0;
}
void dfs(int x,int y){
	int i;
	for(i=0;i<4;i++){
		int ax=x+next[i][0];
		int ay=y+next[i][1];
		if(map[ax][ay]==0||ax<0||ax>=n||ay>=m||ay<0)
		continue;
		map[ax][ay]=0;
		dfs(ax,ay);
	}
}
*/





