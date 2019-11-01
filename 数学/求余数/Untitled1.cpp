#include "iostream"
using namespace std;
int main(){
	int len,i,t;
	string s;
	cin>>t;
	while(t--){
		int now=0;
		cin>>s;
		len=s.length();
		for(i=0;i<len;i++)
		  now=(now*10+s[i]-'0')%10003;	  	
		cout<<now<<endl;
	}
	return 0;
}
