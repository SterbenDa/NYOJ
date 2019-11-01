#include "iostream"
using namespace std;
int a[20];
int n,k;
bool ok;
int result[20];
int main(){
	int i;
	void dfs(int,int,int);
	while(cin>>n>>k){
		ok=0;
		for(i=0;i<n;i++)
		cin>>a[i];
		dfs(0,0,0);
		if(ok==0)
		cout<<"NO"<<endl;
	}
	return 0;
}
void dfs(int time,int sum,int now){
	if(ok==1)
	return;
	if(sum==k){
	  cout<<"YES"<<endl;
	  int j;
	  for(j=0;j<now;j++)
	  cout<<result[j]<<" ";
	  cout<<endl;
      ok=1;	  
}
	if(time==n||sum>k)
	  return;
	result[now]=a[time];
	dfs(time+1,sum+a[time],now+1);
	dfs(time+1,sum,now);
}



/*string re="";
	int temp=a[time];
	while(temp!=0){
		re=(char)(temp%10+'0')+re;
		temp/=10;
	}
	re=re+" ";*/

