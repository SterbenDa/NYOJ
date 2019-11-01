#include "stdio.h"
int main(){
	char c[50];
	double n,price,sum=0;
	while(scanf("%s %lf %lf",c,&n,&price)==3){
		sum+=n*price;
	}
	printf("%0.1lf",sum);
	return 0;
}
