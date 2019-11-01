#include "iostream"
using namespace std;
int main(){
	int t,i,j;
	char c[10]={'O','O','T','T','F','F','S','S','E','N'};
	cin>>t;
	string s,result;
	for(i=0;i<t;i++){
		result="";
		cin>>s;
		for(j=s.length()-1;j>=0;j--)
		   result+=c[s[j]-'0'];
		   cout<<result<<endl;
	}
	return 0;
}
