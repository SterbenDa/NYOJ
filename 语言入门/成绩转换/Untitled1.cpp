#include "iostream"
using namespace std;
int main(){
	int t,i,j;
	cin>>t;
	for(i=0;i<t;i++){
	    cin>>j;
	    if(j>=90&&j<=100)
	    cout<<"A"<<endl;
	    else if(j>=80&&j<=89)
	    cout<<"B"<<endl;
	    else if(j>=70&&j<=79)
	    cout<<"C"<<endl;
	    else if(j>=60&&j<=69)
	    cout<<"D"<<endl;
	    else if(j>=0&&j<=59)
	    cout<<"E"<<endl;
	}
	return 0;
}
