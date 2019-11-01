#include <iostream>
#include <cstdio>
#include <string.h>
#include <vector>
using namespace std;
const int N=500+1;
const int M=5000+1;
bool book[N];
bool fuck[N][N];
vector<int> ve[N],edge[N][N];
int t,fz,fm; 
bool ok;
int main(){
	int gcd(int a,int b);
	void dfs(int x,int fenzi,int fenmu);
	int k,n,m,i,j,s;
	scanf("%d",&k);
	while(k--){
		ok=0;
		fz=99999999;
		fm=1;
		scanf("%d%d",&n,&m);
		for(i=1;i<=n;i++){
			book[i]=0;
			for(j=1;j<=n;j++){
				edge[i][j].clear();
				fuck[i][j]=0;
			}			
			ve[i].clear();
		}
		for(i=0;i<m;i++){
		scanf("%d%d%d",&s,&t,&j);
		if(fuck[s][t]==0||fuck[t][s]==0){
			fuck[s][t]=1;
			fuck[t][s]=1;
			edge[s][t].push_back(j);
	     	edge[t][s].push_back(j);
          ve[s].push_back(t);
		  ve[t].push_back(s);
		}		
		else{
			edge[s][t].push_back(j);
	     	edge[t][s].push_back(j);
		}		
		}
		scanf("%d%d",&s,&t);
		book[s]=1;
		dfs(s,-99999999,99999999);
		if(ok)
		{
			if(fz%fm==0)
			 printf("%d\n",fz/fm);
			 else{
			 	int re=gcd(fz,fm);
			 	printf("%d/%d\n",fz/re,fm/re);
			 }
			 
		}
		else
			printf("IMPOSSIBLE\n");		
	}
	return 0;
}
void dfs(int x,int fenzi,int fenmu){
	if(x==t){
		ok=1;
		if((double)fenzi/fenmu<(double)fz/fm)
		{
			fz=fenzi;
			fm=fenmu;
		}
		return;
	}
	int i,j,next;
	for(i=0;i<ve[x].size();i++){
		next=ve[x][i];
		if(book[next]==1)
		continue;
		for(j=0;j<edge[x][next].size();j++){
				if(edge[x][next][j]>fenzi)
		 fenzi=edge[x][next][j];
		if(edge[x][next][j]<fenmu)
		fenmu=edge[x][next][j];
		book[next]=1;
		dfs(next,fenzi,fenmu);
		book[next]=0;
		}	
	}
}
int gcd(int a,int b){
	if(b==0)
	return a;
	else
	return gcd(b,a%b);
}
