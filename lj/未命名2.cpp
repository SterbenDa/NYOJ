#include <iostream>
#include <cstdio>
#include <string.h>
#include <cstdlib>
const int mod=1000000007;
//const int len=1000000000;
//bool book[len];
using namespace std;
int main(){
	int gcd(int a,int b);
	int i,n,m,t,sum;
/*	for(i=2;i<=31623;i++){
		if(book[i]==0)
		for(t=i*i;t<=len;t+=i)
		 book[t]=1;
	}*/
	cin>>t;
	while(t--){
		sum=0;
		cin>>n>>m;
	/*	if(m==1){
			sum=(n-m+1)*(m+n)/2;
			continue;
		}*/
		for(i=m;i<=n;i++)
		//if(book[i]==0)
	    //	continue;
		 if(gcd(i,n)>=m){
			sum+=i;
			sum%=mod;		
		}		
		cout<<sum<<endl;
	}
    return 0;
}
int gcd(int a,int b){
	if(b==0) return a;
	return gcd(b,a%b);
}
        
