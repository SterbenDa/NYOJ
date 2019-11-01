#include "iostream"
using namespace std;
int main(){
	int gys(int a,int b);
	string s;
	int n,i,sum=0,u=0,ok=0;
	cin>>n;
	cin>>s;
	for(i=0;i<n;i++){
		if(s[i]=='S')
		{
			ok=1;
			cout<<"Bingo";
			break;
		}
		if(s[i]=='U')
		 	u++;
		sum++;
	}
	if(ok==0){
		double result=(double)u/(double)sum;
		if(result>=0.003&&result<=0.5){
			int yuefen=gys(u,sum);	
			 cout<<u/yuefen<<"/"<<sum/yuefen;
		}	 
		   else
		   cout<<"Fail";
	}
	return 0;
}
int gys(int a,int b){
	if(a<b){
		int temp=a;
		a=b;
		b=temp;
	}
	int r;
	while(b!=0){
		r=a%b;
		a=b;
		b=r;
	}
	return a;
}



