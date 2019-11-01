#include<stdio.h>
#include<string.h>
int num[60];
int dp[100010];
int min(int a, int b){
	if(a < b)
		return a;
	else
		return b;
}
int main(){
	int n, i, m, j;
	while(1){
		scanf("%d%d", &n, &m);
		if(n == 0 && m == 0)
			break;
		for(i = 0; i < n; i++)
			scanf("%d", &num[i]);
			
		for(i = 1; i <= m; i++)
		dp[i] = 100000;
		
			dp[0] = 0;
			
		for(i = 0; i < n; i++){
			for(j = 1; j <= m; j++){
				if(j >= num[i]){
				dp[j] = min(dp[j], dp[j - num[i]] + 1);
				}
		} 
	}
		for(i = m; i >= 0; i--){
				if(dp[i] != 100000)
					break;
		}
			printf("%d\n", dp[i]);
}
     return 0;
}
//ÍêÈ«±³°ü¡£¡£¡£¡£¡£

/*
#include "iostream"
#include "algorithm"
using namespace std;
int dp[52][100001];
int main(){
	int a[55];
	int n,t,i,j,k;
	while(cin>>n>>t){
		if(n==0&&t==0)
		break;
		for(i=1;i<=n;i++)
		cin>>a[i];
		for(i=0;i<=t;i++)
		dp[0][i]=99999999;
		
		dp[0][0]=0;
		for(i=1;i<=n;i++)
		for(j=0;j<=t;j++)
		for(k=1;k<=t/a[i];k++){
		  if(k*a[i]<=j)
		 dp[i][j]=min(dp[i-1][j],dp[i-1][j-k*a[i]]+k);
		 else
		 dp[i][j]=dp[i-1][j];
	}
	  
	  for(i=0;i<=t;i++)
	  if(dp[n][i]!=99999999){
	   	cout<<dp[n][i]<<endl;
	   	break;
	  } 		 
	}
	return 0;
}*/
