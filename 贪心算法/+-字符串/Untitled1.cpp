#include "iostream"
#include "stdlib.h"
using namespace std;
int main(){
	string s1,s2;
	int a[5000],b[5000];
	int i;
	while(cin>>s1>>s2){
		int sum=0,first=0,second=0;
		if(s1.length()!=s2.length())
		{
			cout<<-1<<endl;
			continue;
		}
		for(i=0;i<s1.length();i++){
			if(s1[i]=='-')
			  a[first++]=i;
			if(s2[i]=='-')
			  b[second++]=i;
		} 
		if(first!=second){
			cout<<-1<<endl;
			continue;
		}
		for(i=0;i<first;i++){
			sum+=abs(b[i]-a[i]);
		}
		cout<<sum<<endl;
	}
	return 0;
}
