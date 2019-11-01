#include "iostream"
using namespace std;
int main(){
    int i,a,b;
    while(1){
    	cin>>i;
    	if(i==0)
    	break;
    	else{
    		int temp=i;
    		a=i%10;
    		i/=10;
    		b=i%10;
    		i/=10;
    		if(a*a*a+b*b*b+i*i*i==temp)
    		cout<<"Yes"<<endl;
    		else
    		cout<<"No"<<endl;
    	}
    }
	return 0;
}






