#include "iostream"
using namespace std;
int dp[41][2];
int main(){
	int n,i,a;
	dp[2][0]=2;
	dp[2][1]=1;
	for(i=3;i<=40;i++){
		dp[i][0]=dp[i-1][0]+dp[i-1][1];
		dp[i][1]=dp[i-1][0];
	}
	cin>>n;
	while(n--){
		cin>>a;
		cout<<dp[a][0]+dp[a][1]<<endl;
	}
	return 0;
}
