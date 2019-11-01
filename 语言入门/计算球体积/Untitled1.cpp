/*#include "iostream"
#include "iomanip"
using namespace std;
int main(){
   double r;
   double PI=3.1415926;
   while(cin>>r){
   	 cout<<fixed<<setprecision(0)<<PI*r*r*r*4.0/3.0<<endl;
   }
	return 0;
}*/
#include "stdio.h"
int main(){
   double r;
   double PI=3.1415926;
   while(scanf("%lf",&r)!=EOF){
   printf("%lf\n",PI*r*r*r*4.0/3.0);
   }
	return 0;
}
