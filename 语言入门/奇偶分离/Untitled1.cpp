#include "iostream"
using namespace std;
int main(){
	int n,i,j,a;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>a;
		for(j=1;j<=a;j+=2)
		 cout<<j<<" ";
		 cout<<endl;
		 	for(j=2;j<=a;j+=2)
		 cout<<j<<" ";
		 cout<<endl;
	}
	return 0;
}       
