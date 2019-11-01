#include "iostream"
#include "string.h"
using namespace std;
int main(){
	int n,i,a;
	bool book[1001];
	while(cin>>n){
		int num=0;
		memset(book,0,sizeof(book));
		for(i=0;i<n;i++)
		{
			cin>>a;
			if(book[a]==0)
		    	num++;
			book[a]=1;
		}
		cout<<num<<endl;
		for(i=1;i<=1000;i++){
			if(book[i]==1)
				cout<<i<<" ";
		}
		cout<<endl;
	}
	return 0;
}
