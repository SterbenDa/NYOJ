#include "iostream"
using namespace std;
int main(){
	int n,k;
	cin>>n>>k;
	if((n*2)%k==0)
	cout<<n*2/k;
	else
	cout<<1+(n*2)/k;
	return 0;
}
