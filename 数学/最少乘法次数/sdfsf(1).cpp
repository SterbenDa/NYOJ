
#include "iostream"
using namespace std;
int main(){
	int a[120];
	int t,i,n;
	a[0]=1;
	for(i=1;i<=20;i++)
	    a[i]=a[i-1]*2;
	cin>>t;
	while(t--){
		int sum=0;
		cin>>n;
	if(n==1)
	{
		cout<<0<<endl;
		continue;
	}
	  int	tmp;
	for(i=1;i<=20;i++){
		 if(n<a[i])
	    break;
	    sum++;
	}	   
	for(tmp=i-1;tmp>=0&&n!=0;tmp--){
		if(a[tmp]<=n){
			sum++;
			n-=a[tmp];
		}
	}
	cout<<sum-1<<endl;
	}
	return 0;
}
