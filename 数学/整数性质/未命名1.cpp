#include <cstdio>
#include <iostream>
using namespace std;
long long x,y;
int main(){
	long long exgcd(long long a,long long b);
	long long a,b;
	while(scanf("%lld%lld",&a,&b)==2){
		long long re=exgcd(a,b);
	   printf("%d %d\n",x,y);	
	}
	return 0;
}
long long exgcd(long long  a,long long b){
	long long t,d;
	if(b==0){
		x=1;
	    y=0;
	    return a;
	}
    d=exgcd(b,a%b);
    t=x;
    x=y;
    y=t-(a/b)*y;
    return d;
}




