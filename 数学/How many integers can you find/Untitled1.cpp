#include "iostream"
using namespace std;
int main(){
	int n,m1,m2;
	int gcd(int a,int b);
	while(cin>>n>>m1>>m2){
		int sum=0;
		sum+=n/m1;
		sum+=n/m2;
		if(n%m1==0)
		  sum-=1;
		if(n%m2==0)
		  sum-=1;
		int gbs=m1*m2/gcd(m1,m2);
		if(n%gbs==0)
		 sum-=n/gbs-1;
		 else
		 sum-=n/gbs;
		 cout<<sum<<endl;
	}
	return 0;
}
int gcd(int a,int b){
	int r;
	if(a<b){
		int tmp=b;
		b=a;
		a=tmp;
	}
	while(b!=0){
		r=a%b;
		a=b;
		b=r;
	}
	return a;
}
