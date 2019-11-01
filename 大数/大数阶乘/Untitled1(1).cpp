#include "iostream"
#include "math.h"
using namespace std;
int re[56400],len;
int head();
void add(int n);
void handle();
int now_len;
int main(){
	int m,j;
	while(cin>>m){
		double sum=0.0;
		for(j=2;j<=m;j++){
			sum+=log10(j);
		}
		len=(int)sum+1;
		cout<<len<<endl;
		for(j=0;j<len;j++)
		  re[j]=0;
		re[0]=1;
		now_len=0;
		for(j=2;j<=m;j++)
		   add(j);
		for(j=len-1;j>=0;j--)
		cout<<re[j];
		cout<<endl;
	}
	return 0;
}

void add(int n){
	int i;
	for(i=0;i<=now_len;i++){
		re[i]*=n;
	}
	handle();
}

void handle(){
	int i,temp=0,now;
	for(i=0;i<=now_len;i++){
		now=temp+re[i];
		re[i]=now%10;
		temp=now/10;
	}
     while(temp>0){
        now=re[i]+temp;
     	re[i]=now%10;
     	temp=now/10;
     	i++;
     }
     now_len=i-1;
}
/*
int head(){
	int i;
	for(i=len-1;i>=0;i--)
	if(re[i]!=0)
	   return i;
}*/


