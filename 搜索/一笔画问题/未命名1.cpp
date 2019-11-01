#include <iostream>
#include <cstdio>
#include <string.h>
#include <vector>
#include <algorithm>
using namespace std;
const int N=1000+10;
const int M=2000+10;
int book[N];
struct Node{
	int s,e;
}node[M];
vector<int> ve[N];
bool flag[N];
int count1;
void dfs(int x){
	for(int i=0;i<ve[x].size();i++){
		if(flag[ve[x][i]]==1)
		continue;
		flag[ve[x][i]]=1;
		count1++;
		dfs(ve[x][i]);
	}
}
int main(){
	int t,i,j,a,b,n,m;
	bool ok;
	scanf("%d",&t);
	while(t--){
		j=0;
		ok=1;
		scanf("%d%d",&n,&m);
	   memset(book,0,sizeof(int)*(n+1));
		for(i=0;i<m;i++){
		  scanf("%d%d",&a,&b);
		  book[a]++;
		  book[b]++;
		  ve[a].push_back(b);
		  ve[b].push_back(a);
		}
		//判断奇数边的点的总数是不是0或2 是则可以 
		for(i=1;i<=n;i++){
			if(book[i]%2==1)
			j++;
			if(j>2)
			{
				ok=0;
				break;
			}
		}		
		if(ok==0||(j!=0&&j!=2)){
			printf("No\n");
			for(i=1;i<=n;i++)
			ve[i].clear();
			continue;
		}		
		//判断是否连tong
		memset(flag,0,sizeof(bool)*(n+1));
		flag[1]=1;
		count1=1;
		dfs(1);
		if(count1!=n)
		printf("No\n");
		else
		printf("Yes\n");
		for(i=1;i<=n;i++)
			ve[i].clear();
	}
	return 0;
}
