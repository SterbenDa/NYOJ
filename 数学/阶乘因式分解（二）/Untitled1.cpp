#include "iostream"
using namespace std;
int main(){
	int x,t,a,b,i,j;
	cin>>t;
	while(t--){
		long long sum=0;
		cin>>a>>b;
		int tmp=b;
		while(b<=a){
			sum+=a/b;	
	       	b*=tmp;	
		}
		cout<<sum<<endl;
	}
	return 0;
}

