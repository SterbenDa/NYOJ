#include "stdio.h"
int main(){
    int n,i,j,a;
    int x,y,z;
    scanf("%d",&n);
    for(i=0;i<n;i++){
    	int length=-99999999,thin=99999999,bignum=-99999999;
    	scanf("%d",&a);
    	for(j=0;j<a;j++){
    	 scanf("%d %d %d",&x,&y,&z);
    	   if(x>length){
    	   length=x;
    	   thin=y;
    	   bignum=z;
    }
       else if(x==length){
       	  if(thin>y){
       	  	thin=y;
       	  	 bignum=z;
       	  }
       	 else if(thin==y){
       	    if(bignum<z)
       	    bignum=z;
       	}
       }
   }
        printf("%d\n",bignum);
    	}
	return 0;
}
