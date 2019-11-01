#include "iostream"
using namespace std;
int main(){
	int i,j,n,k;
	bool light[1001];
	cin>>n>>k;
	for(i=1;i<=n;i++)
	   light[i]=1;
	for(j=2;j<=k;j++){
	   int temp=j;
	   while(temp<=n){
	   	if(light[temp]==1)
	   	   light[temp]=0;
	   	   else
	   	    light[temp]=1;
	   	temp+=j;
	   }  
	}
	for(i=1;i<=n;i++)
	if(light[i]==1)
	cout<<i<<" ";
	return 0;
}

