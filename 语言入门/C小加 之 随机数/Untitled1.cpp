#include "iostream"
using namespace std;
int main(){
    int n,i,j,a,b;
    bool book[1001];
    cin>>n;
    for(i=0;i<n;i++){
    	int sum=0;
    	for(j=1;j<1001;j++)
    	 book[j]=0;
      cin>>a;
      for(j=0;j<a;j++){
      	cin>>b;
      	if(book[b]==0){
        book[b]=1;  
        sum++;
	}
      }
      cout<<sum<<endl;
    for(j=1;j<1001;j++)
    	 if(book[j]==1)
    	 cout<<j<<" "; 	 
   	   cout<<endl;
}
	return 0;
}
