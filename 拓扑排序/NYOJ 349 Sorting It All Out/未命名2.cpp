#include <iostream>
#include <cstdio>
#include <string.h>
#include <queue>
#include <vector>
using namespace std;
const int N=30;
int n,m;
bool book[N];
int indegree[N];
bool map[N][N];
vector<int> ve[N];
queue<int> q;
int main(){
	int i,j,a,b,num;
	char c[5];
	while(scanf("%d%d",&n,&m)==2){
		if(n==0&&m==0)
		break;
		memset(map,0,sizeof(map));
		num=0;
		for(i=0;i<n;i++){
			ve[i].clear();
			book[i]=0;
			indegree[i]=0;
		}
		while(!q.empty()) q.pop();
		for(i=0;i<m;i++){
			scanf("%s",c);
			a=c[0]-'A';
			b=c[2]-'A';
			if(map[a][b]==0){
				map[a][b]=1;
				ve[a].push_back(b);
				indegree[b]++;	
			}
			book[a]=1;
			book[b]=1;		  		 
		}
		bool ok=1;
		for(i=0;i<n;i++)
		  if(book[i]!=1){
		  	ok=0;
		  	break;
		  }
		  if(ok==0)
		  {
		  	printf("Sorted sequence cannot be determined.\n");
		  	continue;
		  }
		for(i=0;i<n;i++)
		for(j=i+1;j<n;j++){
			if(map[i][j]==map[j][i])
			     num++; 
		}
		if(num!=0){
			printf("Inconsistency found after %d relations.\n",num);
		  	continue;
		}
		toposort();
	}
	return 0;
}
