#include <stdio.h>   
#include<stdio.h>
#include<math.h>
double f1(double x){
double result;
result=4.0*pow(x,1.5)/3-0.4*pow(x,2.5);
return result;
}
double f2(double x){
double result;
result=pow(x,4)/4.0-2*pow(x,3)/3-0.5*x*x+2*x;
return result;	
}
double f3(double x){
double result;
result=72*x-8.0/15*pow((x-5),15/8.0);
return result;
}
int main(){
int n,result;
double a,b,sum;
scanf("%d",&n);
while(n--){
sum=0;
scanf("%lf%lf",&a,&b);
if(b<=2){sum=f1(b)-f1(a);}
else if(b<=5&&b>2){
if(a>2){sum=f2(b)-f2(a); }
if(a<=2){sum=f2(b)-f2(2.0)+f1(2.0)-f1(a); }}
else if(b>5){
if(a<=2) {sum=f1(2.0)-f1(a)+f2(5.0)-f2(2)+f3(b)-f3(5.0); }
if(a>2&&a<=5){sum=f2(5.0)-f2(a)+f3(b)-f3(5.0); }
if(a>5){sum=f3(b)-f3(a); }
}
result=(int)((sum*10+5)/10);
printf("%d\n",result);
}
return 0;
}




/*#include<math.h>  
double f(double n){  
    double t1,t2,t3;  
    if(-1e-7<=n&&n<=2+1e-7)
		return t1= 4.0/3*pow(n,1.5)-0.4*pow(n,2.5);  
    if(-1e-7+2<n&&n<=5+1e-7)
		return t2= f(2)+0.25*pow(n,4)-2.0/3*pow(n,3)-0.5*pow(n,2)+2*n-6+16.0/3;  
    return t3=f(5)+72*n-8.0/15*pow(n-5,15.0/8)-72*5;  
}  
int main()  
{  
    int T;  
    scanf("%d",&T);  
    while(T--){  
        double a,b;  
        scanf("%lf%lf",&a,&b);  
        printf("%d\n",(int)(f(b)-f(a)+0.5));  
        //printf("%.lf\n",f(b)-f(a));  //之前这样输出时提交一直wrong!!!!!!!!!!!  
    }  
    return 0;  
} 
*/


