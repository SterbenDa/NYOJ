#include <iostream>
#include <cstdio>
using namespace std;
int n,m;
int sum[105][105];
char c[105][105];
char s[105];
char now;
int next[4][2]={{-1,0},{0,1},{0,-1},{1,0}};
int main(){
	 bool dfs(int x,int y);
	int i,j,bx,by;
	 while(scanf("%d%d",&n,&m)==2){
	 	for(i=0;i<n;i++){
	 	scanf("%s",s);
	 		for(j=0;j<m;j++){
	 			  c[i][j]=s[j];
	 			  sum[i][j]=0;
	 			  if(c[i][j]=='T'){
	 			  	bx=i;
	 			  	by=j;
				   }
			 }	 		
		 }	 	 
		 scanf("%s",s);
		 sum[bx][by]++;
		 if(dfs(bx,by))
		printf("YES\n");
		 else
		 	printf("NO\n");	 
	 }	 
}
bool dfs(int x,int y){
	int i;
	if(c[x][y]=='X')
	return true;
	for(i=0;i<4;i++){
		int a=x+next[i][0];
		int b=y+next[i][1];
		if(a<0||a>=n||b<0||b>=m||c[a][b]=='#'||sum[a][b]>3)
		continue;
		sum[a][b]++;
		if(dfs(a,b))  
		return true;
	}
	return false;
}












/*#include <iostream>
using namespace std;
int n,m;
char c[105][105];
char s[105];
bool book[105][105];
char now;
int next[4][2]={{-1,0},{0,1},{0,-1},{1,0}};
int main(){
	 bool dfs(int x,int y);
	int i,j,bx,by;
	 while(cin>>n>>m){
	 	for(i=0;i<n;i++){
	 		cin>>s;
	 		for(j=0;j<m;j++){
	 			  c[i][j]=s[j];
	 			  book[i][j]=0;
	 			  if(c[i][j]=='T'){
	 			  	bx=i;
	 			  	by=j;
				   }
			 }	 		
		 }	 
		 cin>>now;
		 book[bx][by]=1;
		 if(dfs(bx,by))
		 cout<<"YES"<<endl;
		 else
		 cout<<"NO"<<endl;		 
	 }	 
}
bool dfs(int x,int y){
	int i;
	if(c[x][y]=='X')
	return true;
	for(i=0;i<4;i++){
		int a=x+next[i][0];
		int b=y+next[i][1];
		if(a<0||a>=n||b<0||b>=m||book[a][b]==1||c[a][b]=='#')
		continue;
		book[a][b]=1;
		if(dfs(a,b))  
		return true;
		book[a][b]=0;
	}
	return false;
}*/
