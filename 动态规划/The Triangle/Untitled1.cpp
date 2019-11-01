#include "iostream"
#include "algorithm"
using namespace std;
int main(){
	int a[105][105];
	int dp[105][105];
	int i,j,n,big=-99999999;
	cin>>n;
	for(i=1;i<=n;i++)
		for(j=1;j<=i;j++){
		cin>>a[i][j];
		if(i==1&&j==1)
		 dp[i][j]=a[i][j];
	   else if(j==1&&i>1)
	   dp[i][j]=a[i][j]+dp[i-1][j];
	   else if(i==j&&j>1)
	   dp[i][j]=a[i][j]+dp[i-1][j-1];
	}
	for(i=3;i<=n;i++)
	  for(j=2;j<i;j++){
	  dp[i][j]=a[i][j]+max(dp[i-1][j-1],dp[i-1][j]);
     if(big<dp[n][j])
	  big=dp[n][j];	  
}
  cout<<big<<endl;
	return 0;
}
