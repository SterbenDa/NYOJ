#include "iostream"
#include "stdlib.h"
int a[20],n;
int sum,small;
using namespace std;
int main(){
	void dfs(int length,int add);
	int i;
	while(cin>>n){
		sum=0;
		small=99999999;
		for(i=0;i<n;i++){
		cin>>a[i];
		sum+=a[i];
	}
	 dfs(1,a[0]);
	 dfs(1,0);
	 cout<<small<<endl;
	}
	return 0;
}
void dfs(int length,int add){
	if(abs(sum-add-add)<small&&(sum-add)!=0)
	  small=abs(sum-add-add);
	if(length>=n)
	  return;
	  dfs(length+1,add+a[length]);
	  dfs(length+1,add);
}



