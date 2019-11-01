#include "stdio.h"
int main(){
   double a,sum=0.0;
   int i;
   for(i=0;i<12;i++)
    {
	  scanf("%lf",&a);
	sum+=a;
    }
   printf("%.2lf",sum/12.0);
	return 0;
}
