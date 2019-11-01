#include "iostream"
using namespace std;
int main(){
	long long a;
	string s;
	while(cin>>a){
		if(a==0){
    	cout<<"0"<<endl;
	  continue;	
	}
		s="";
		while(a!=0){
			if(a%2==0)
			s='0'+s;
			else
			s='1'+s;
			a/=2;
		}
     cout<<s<<endl;
	}
	return 0;
}
