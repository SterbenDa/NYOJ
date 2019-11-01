#include "iostream"
using namespace std;
int main(){
	int n,k;
	while(cin>>n>>k){
	  if(n<=k)
	  cout<<2<<endl;
	 else{
    if((n*2)%k==0)
	cout<<n*2/k<<endl;
	else
	cout<<1+(n*2)/k<<endl;
}
}
	return 0;
}
