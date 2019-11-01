#include "stdio.h"
#include "math.h"
int main(){
    int n,i,a,j;
    scanf("%d",&n);
    for(i=0;i<n;i++){
    	int num=0;
        scanf("%d",&a);
        for(j=2;j<=sqrt(a+1);j++){
        	if((a+1)%j==0)
        	num++;
        }
        printf("%d\n",num);
    }
	return 0;
}



