#include "stdio.h"
int main(){
	char c[52];
	int k,i,j;
	while(scanf("%s %d",&c,&k)==2){
		for(i=0;c[i]!='\0';i++){
			for(j=0;j<26;j++){
				if(j*k%26+'A'==c[i]){
					c[i]=j+'A';
					break;
				}
			}
		}
			printf("%s\n",c);
	}
	return 0;
}
