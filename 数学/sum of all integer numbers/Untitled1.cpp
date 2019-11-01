#include "stdio.h"
int main(){
	int n,i;
	while(scanf("%d",&n)==1){
		int sum=0;
		if(n>=1){
		for(i=1;i<=n;i++)
		sum+=i;
	}
	   else{
	   	for(i=n;i<=1;i++)
	 	sum+=i;
	   }
	   	printf("%d\n",sum);
	}
	return 0;
}
