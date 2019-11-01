#include "iostream"
#include "algorithm"
using namespace std;
int main(){
	int a[25][25];
	int dp[25][25];
	int i,j,n,m;
	while(cin>>n>>m){
	   int big=-99999999;
		for(i=0;i<n;i++)
		for(j=0;j<m;j++)
			cin>>a[i][j];

		dp[0][0]=a[0][0];
		for(i=1;i<m;i++)
		dp[0][i]=a[0][i]+dp[0][i-1];
		for(i=1;i<n;i++)
	  dp[i][0]=a[i][0]+dp[i-1][0];	
	
	 for(i=1;i<n;i++){
	 for(j=1;j<m;j++){
	 	dp[i][j]=a[i][j]+max(dp[i-1][j],dp[i][j-1]);
	   //cout<<dp[i][j]<<" ";	
	 }
  //cout<<endl;	 
}
	 for(i=0;i<m;i++){
	 	if(big<dp[n-1][i])
	 	big=dp[n-1][i];
	 }
	 cout<<big<<endl;
	}
	return 0;
}
