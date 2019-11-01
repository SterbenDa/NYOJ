#include "iostream"
#include "math.h"
using namespace std;
int re[16400],len;
int head();
void add(int n);
void handle(int now);
int main(){
	int m,j;
	while(cin>>m){
		double sum=0.0;
		for(j=2;j<=m;j++){
			sum+=log10(j);
		}
		len=(int)sum+1;
		for(j=0;j<len;j++)
		  re[j]=0;
		re[0]=1;
		for(j=2;j<=m;j++)
		   add(j);
		for(j=len-1;j>=0;j--)
		cout<<re[j];
		cout<<endl;
	}
	return 0;
}

void add(int n){
	int i,now=head();
	for(i=0;i<=now;i++){
		re[i]*=n;
	}
	handle(now);
}

void handle(int n){
	int i,temp=0,now;
	for(i=0;i<=n;i++){
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
}

int head(){
	int i;
	for(i=len-1;i>=0;i--)
	if(re[i]!=0)
	   return i;
}


