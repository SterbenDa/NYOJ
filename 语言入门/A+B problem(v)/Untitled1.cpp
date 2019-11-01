#include "iostream"
using namespace std;
int main(){
	int a,b;
	while(cin>>a>>b){
		if(a==0&&b==0)
		break;
		int result1=0,result2=0;
		while(a!=0){
			result1=result1*10+a%10;
			a/=10;
		}
		while(b!=0){
			result2=result2*10+b%10;
			b/=10;
		}
		cout<<result1+result2<<endl;
	}
	return 0; 
}
