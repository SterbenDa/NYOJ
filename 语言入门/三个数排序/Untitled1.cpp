#include "iostream"
using namespace std;
int main(){
	int i,j,a[3];
	cin>>a[0]>>a[1]>>a[2];
	for(i=0;i<2;i++)
	for(j=i+1;j<3;j++)
	if(a[i]>a[j]){
		int temp=a[i];
		a[i]=a[j];
		a[j]=temp;
	}
	cout<<a[0]<<" "<<a[1]<<" "<<a[2];
	return 0;
}




