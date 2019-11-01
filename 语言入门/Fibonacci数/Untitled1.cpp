#include "iostream"
using namespace std;
int main(){
	int i,a,n,fi[30];
	cin>>n;
	fi[1]=1;
	fi[2]=1;
	for(i=3;i<30;i++)
	  fi[i]=fi[i-2]+fi[i-1];
	for(i=0;i<n;i++){
	   	cin>>a;
	   	cout<<fi[a]<<endl;	   	  
	}
	return 0;
}
