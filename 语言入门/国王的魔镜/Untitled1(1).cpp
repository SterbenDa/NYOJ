/*
#include "iostream"
using namespace std;
int main(){
	int n,i;
	cin>>n;
	string s;
	for(i=0;i<n;i++){
		cin>>s;
	  int num=s.length();
	 while(num%2==0){
	 	num/=2;
	 }
	   cout<<num<<endl;
	}	
	return 0;
}
*/

#include "iostream"
using namespace std;
int main(){
	int n,i,l,r;
	cin>>n;
	string s;
	for(i=0;i<n;i++){
		cin>>s;
	   int right=s.length(),num=s.length();
	   int mid=right/2;
	   if(mid%2==1){
	   	cout<<mid<<endl;
	   	continue;
	   }
	   bool ok=1;
	   while(1){
	   	if(mid%2==1)
	   	 	break;
	   	for(l=0,r=right-1;l<mid;l++,r--)
	   	  if(s[l]!=s[r]){
             ok=0;
	   	     break;
	   	 }
	   	 if(ok==0)
	   	   break;
	   	  num/=2;   	
	   	 right=mid; 
			mid/=2;
	   	 if(mid==0)
	   	 break;
	   }
	   cout<<num<<endl;
	}	
	return 0;
}
