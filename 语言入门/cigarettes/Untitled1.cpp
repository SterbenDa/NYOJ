#include "iostream"
using namespace std;
int main(){
	int n,i,a,b;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>a>>b;
		int sum=a,shengyu=0;
	   while(a>=b){
	   	  shengyu=a%b;
	   	  a/=b;
	   	  sum+=a;
	   	  a+=shengyu;
	   }
	   cout<<sum<<endl;
	}
	return 0;
}
