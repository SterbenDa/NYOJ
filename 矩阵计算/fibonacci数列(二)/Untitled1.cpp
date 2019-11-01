#include "iostream"
#define MOD 10000
#define M 2
using namespace std;
struct fuck{
	int a[M][M];
};
fuck I={1,0,0,1};
fuck handle(fuck a1,fuck a2);
fuck quickpow(fuck a,int n);
int main(){
	int n,i;
	while(cin>>n){
		if(n==-1)
		break;
		if(n==0)
		{
			cout<<0<<endl;
			continue;
		}
		 fuck fibo;
		fibo.a[0][0]=1;fibo.a[0][1]=1;
		fibo.a[1][0]=1;fibo.a[1][1]=0;	
		cout<<quickpow(fibo,n).a[1][0]<<endl;	
	}
	return 0;
}
fuck quickpow(fuck a,int n){
	fuck b=I;
	while(n>0){
		if(n&1)
		  b=handle(b,a);
		  n=n>>1;
		  a=handle(a,a);
	}
	return b;
}


fuck handle(fuck a1,fuck a2){
	fuck temp;
	int i,j,k;
	for(i=0;i<M;i++)
		for(j=0;j<M;j++){
			temp.a[i][j]=0;
			for(k=0;k<M;k++)
			temp.a[i][j]+=(a1.a[i][k]*a2.a[k][j])%MOD;
		}
	return temp;
}





