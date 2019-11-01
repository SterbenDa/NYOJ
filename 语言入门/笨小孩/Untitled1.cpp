#include "iostream"
using namespace std;
int main(){
	bool check(int a);
	int n,i,j;
	string s;
	int book[26];
	cin>>n;
	for(i=0;i<n;i++){
		int big=-99999999,small=99999999;
		for(j=0;j<26;j++)
		  book[j]=0;
		cin>>s;
		for(j=0;s[j]!='\0';j++)
		 book[s[j]-'a']++;
	  for(j=0;j<26;j++){
	  	if(book[j]>0){
		  if(big<book[j])
		  big=book[j];
		  if(small>book[j])
		   small=book[j];
	}
	}
	      if(check(big-small)&&big-small>1)
	      cout<<"Lucky Word"<<endl<<big-small<<endl;
	      else
	    cout<<"No Answer"<<endl<<0<<endl;
	}
	return 0;
}
bool check(int a){
	int i;
	for(i=2;i*i<=a;i++)
	   if(a%i==0)
	   return false;
	   return true;
}


