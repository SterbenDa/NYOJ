#include "iostream"
using namespace std;
int main(){
     int n,i,j;
     int book[26];
     cin>>n;
     string s;
     for(i=0;i<n;i++){
     	int big=-99999999;
     	int flag;
     	for(j=0;j<26;j++)
     	book[j]=0;
     	cin>>s;
     	 for(j=0;s[j]!='\0';j++){
     	 	book[s[j]-'a']++;
     	 }
     	 for(j=0;j<26;j++){
     	 	if(big<book[j]){
     	 	big=book[j];
     	 	flag=j;
     	 }
     	 }
     	 cout<<(char)(flag+'a')<<endl;
     }
	return 0;
}

