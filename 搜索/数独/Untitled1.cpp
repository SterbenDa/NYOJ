
#include "iostream"
using namespace std;
char c[11][11];
bool ko;
bool check(int x,int y,char k);
int main(){
	int n,i,j;
	cin>>n;
	void dfs(int n);
	while(n--){	
	     ko=0;
		for(i=0;i<9;i++)
			for(j=0;j<9;j++)
			 cin>>c[i][j];
		dfs(0);
	}
	return 0;
}
void dfs(int n){
	if(ko)
	return;
	int i,j;
	if(n==81){
		for(i=0;i<9;i++){
		for(j=0;j<9;j++)
		cout<<c[i][j]<<" ";
		cout<<endl;	
	}
	 ko=1;
	}
	int x=n/9,y=n%9;
	if(c[x][y]!='0')
	   dfs(n+1);
	else{
		char ch;
		bool ok;
		for(ch='1';ch<='9';ch++){
			ok=check(x,y,ch);
			if(ok){
				c[x][y]=ch;
			 dfs(n+1);
			 if(ko)
			 break;
			 c[x][y]='0';
		}
		}
	}
}
bool check(int x,int y,char k){
	int i,j;
	for(i=0;i<9;i++){
	if(c[x][i]==k)
	return false;
}
   	for(i=0;i<9;i++){
	if(c[i][y]==k)
	return false;
}
   int t1=(x/3)*3;
   int t2=(y/3)*3;
   for(i=t1;i<t1+3;i++)
   for(j=t2;j<t2+3;j++)
     if(c[i][j]==k)
     return false;
     return true;
}






