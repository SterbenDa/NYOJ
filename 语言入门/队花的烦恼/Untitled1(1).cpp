#include "stdio.h"
int main(){
	long a;
	char c[60];
    while(scanf("%ld",&a)!=EOF){
		if(a==0){
    	printf("0\n");
	  continue;	
	}
	  int now=0;
		while(a!=0){
			if(a%2==0)
			c[now++]='0';
			else
		  c[now++]='1';
			a/=2;
		}
       while(--now>=0)
        printf("%c",c[now]);
     printf("\n");
	}
	return 0;
}
