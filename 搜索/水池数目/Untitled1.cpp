#include "iostream"
using namespace std;
int n,m;
int a[100][100];
bool book[100][100];
int next[4][2]={{-1,0},{0,1},{1,0},{0,-1}};
int main(){
	void dfs(int x,int y);
	int num,i,j;
	cin>>num;
	while(num--){
		cin>>n>>m;
		int sum=0;
		for(i=0;i<n;i++)
		for(j=0;j<m;j++){
		cin>>a[i][j];
	  book[i][j]=0;	
	}
		for(i=0;i<n;i++)
		for(j=0;j<m;j++)
		{
			if(a[i][j]==1){
				sum++;
				dfs(i,j);
			}
		}
		cout<<sum<<endl;
	}
	return 0;
}
void dfs(int x,int y){
	int i;
	for(i=0;i<4;i++){
		int ax=x+next[i][0];
		int ay=y+next[i][1];
		if(ax<0||ax>=n||ay<0||ay>=m||book[ax][ay]==1||a[ax][ay]==0)
		continue;
		book[ax][ay]=1;
		a[ax][ay]=0;
		dfs(ax,ay);
	}
}





