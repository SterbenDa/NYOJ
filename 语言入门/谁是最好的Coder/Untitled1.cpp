#include "iostream"
using namespace std;
int main(){
    int i,a,b,n;
    while(cin>>n){
    	if(n==0)
    	break;
    	int big=-99999999;
      for(i=0;i<n;i++){
      	cin>>a>>b;
      	if(a+b>big)
      	big=a+b;
      }
      cout<<big<<endl;
    }
	return 0;
}



