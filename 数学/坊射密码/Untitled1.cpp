#include "stdio.h"
int main(){
	char c[55];
	char original[55];
	int k1,k2,i;
	while(scanf("%s %d %d",&c,&k1,&k2)==3){
		char tmp;
		for(i=0;c[i]!='\0';i++)
		for(tmp='A';tmp<='Z';tmp++){
			if(((tmp-'A')*k1+k2)%26+'A'==c[i])
			{
				original[i]=tmp;
				break;
			}
		}
		original[i]='\0';
		printf("%s\n",original);
	}
	return 0;
}
