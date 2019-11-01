#include "iostream"
using namespace std;
int main(){
	int i,n,a,sum[1000],tol[1000];
	sum[1]=1;
	tol[1]=1;
	 for(i=2;i<1000;i++){
	 	sum[i]=sum[i-1]+i;
	 	tol[i]=tol[i-1]+sum[i];
	 }
	cin>>n;
	for(i=0;i<n;i++){
		cin>>a;
		cout<<tol[a]<<endl;
	}
	return 0;
}
