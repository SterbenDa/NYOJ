#include "iostream"
using namespace std;
int main(){
	int n,i,j;
	cin>>n;
	string s;
	for(i=0;i<n;i++){
		cin>>s;
		bool flag=0;
		for(j=1;s[j]!='\0';j++){
			if(s[j]=='0'&&flag==0)
			continue;
			else{
				flag=1;
			cout<<s[j];
		}
		}
		if(flag==0) 
		cout<<0;
		cout<<endl;
	}
	return 0;
}
