#include "iostream"
#include "stdlib.h"
int a[20],n,k;
bool ok;
using namespace std;
int main(){
	void dfs(int length,int add);
	int i;
	while(cin>>n){
     	ok=0;
		for(i=0;i<n;i++)
		cin>>a[i];
      cin>>k;
	 dfs(0,0);
	 if(ok)
	  cout<<"Of course,I can!"<<endl;
	  else
	  cout<<"Sorry,I can't!"<<endl;
	}
	return 0;
}
void dfs(int length,int add){
	if(ok==1)
    	return;
	if(add==k)
	  ok=1;
	if(length>=n||add>k)
	  return;
	  dfs(length+1,add+a[length]);
	  dfs(length+1,add);
}



