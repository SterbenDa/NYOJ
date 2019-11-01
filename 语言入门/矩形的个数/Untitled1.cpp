#include "stdio.h"
int main(){
	double a,b;
	while(scanf("%lf %lf",&a,&b)==2){
		printf("%.0lf\n",(a+1)*a/2*(b+1)*b/2);
	}
	return 0;
}
