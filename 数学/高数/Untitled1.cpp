#include "stdio.h"
#include "math.h"
int main(){
	int a,b,t,i;
	scanf("%d",&t);
	for(i=0;i<t;i++){
		scanf("%d %d",&a,&b);
		double base1,base2;
		base1=(double)b;
		base2=(double)a;
		double fir,sec;
		if(b<2)
		  fir=4.0/3.0*pow(b,3.0/2.0)-2.0/5.0*pow(b,5.0/2.0)+288.741504;
		else if(b<5)
		 fir=1.0/4.0*pow(b,4.0)-2.0/3.0*pow(b,3.0)-1.0/2.0*pow(b,2.0)+2*b+289.583332;
		 else 
		 fir=72*b-8.0/15.0*pow(b-5,15.0/8.0);
		 
		 if(a<2)
		  sec=4.0/3.0*pow(a,3.0/2.0)-2.0/5.0*pow(a,5.0/2.0)+288.741504;
		else if(a<5)
		 sec=1.0/4.0*pow(a,4.0)-2.0/3.0*pow(a,3.0)-1.0/2.0*pow(a,2.0)+2*a+289.583332;
		 else 
		 sec=72*a-8.0/15.0*pow(a-5,15.0/8.0);
    //	printf("%lf   %lf\n",fir,sec);
		 printf("%.0lf\n",fir-sec);
	}
	return 0;
}
