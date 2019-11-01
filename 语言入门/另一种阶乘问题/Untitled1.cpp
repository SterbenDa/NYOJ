#include "iostream"
using namespace std;
int main(){
	int n,i,j,a[21];
	a[0]=0;
	for(i=1;i<21;i++){
		a[i]=1;
	 for(j=1;j<=i;j+=2)
	   a[i]*=j;
	   a[i]+=a[i-1];
}
	cin>>n;
	for(i=0;i<n;i++){
	   cin>>j;
	   cout<<a[j]<<endl;
	}
	return 0;
}
