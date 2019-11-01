#include "iostream"
using namespace std;
int re[10];
int a[10]={0,1,2,3,4,5,6,7,8,9};
int n,r;
int main(){
	void dfs(int now,int k);
	int i;
	while(cin>>n>>r){
		dfs(n,0);
	}
	return 0;
}
void dfs(int now,int k){
   if(k==r){
   	int i;
   	for(i=0;i<r;i++)
   	 cout<<re[i];
   	 cout<<endl;
   	return;
   }
	if(now<=0)
	 return;
	re[k]=a[now];
	dfs(now-1,k+1);
	dfs(now-1,k);
}
