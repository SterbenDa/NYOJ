#include "iostream"
using namespace std;
int main(){
	int i,j,k,n;
	string s;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>s;
	  for(j=0;j<s.length()-1;j++)
		for(k=j+1;k<s.length();k++)
		if(s[j]>s[k]){
			char temp=s[j];
			s[j]=s[k];
			s[k]=temp;
		}
	   for(j=0;s[j]!='\0';j++)
	   cout<<s[j]<<" ";
	   cout<<endl;
	}
	return 0;
}
