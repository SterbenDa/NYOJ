#include "iostream"
using namespace std;
int main(){
    int a,b;
    while(cin>>a>>b){
    	if(a==0&&b==0)
    	break;
    	int num=0,last=0;
    	while(a!=0){
    	if(a%10+b%10+last>9){
        num++;
        last=1;
    }  
      else
        last=0;
        a/=10;
        b/=10;
    }
      cout<<num<<endl;
}
	return 0;
}
