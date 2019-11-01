#include "iostream"
using namespace std;
int main(){
	int n,i,a[42],num;
	cin>>n;
	a[1]=0; a[2]=1; a[3]=2;
	for(i=4;i<=40;i++){
		a[i]=a[i-1]+a[i-2];
	}
	while(n--){
		cin>>num;
		cout<<a[num]<<endl;
	}
	return 0;
}
