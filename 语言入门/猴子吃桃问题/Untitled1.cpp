#include "iostream"
using namespace std;
int main(){
	int m,n,i;
	int a[30];
	a[0]=1;
	for(i=1;i<30;i++)
	   a[i]=(a[i-1]+1)*2;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>m;
		cout<<a[m]<<endl;
	}
	return 0;
}
