#include "iostream"
using namespace std;
int main(){
    int i,a,b,j;
    while(cin>>a>>b){
        if(a==0&&b==0)
        break;
        int ok=0;
        for(i=1;i<=a/2;i++){
        	if(i*(a-i)==b)
        	{
			    ok=1;
        		break;
        	}
        }    
        if(ok)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
	return 0;
}



