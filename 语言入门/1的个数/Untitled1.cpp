#include "iostream"
using namespace std;
int main(){
	int n,i,j;
	cin>>n;
	for(i=0;i<n;i++){
		int sum=0;
	   cin>>j;
	   while(j!=0){
	   	if(j%2==1)
	   	  sum++;
	   	  j/=2;
	   }
	   cout<<sum<<endl;
	}
	return 0;
}
