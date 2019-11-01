#include "iostream"
#include "iomanip"
using namespace std;
int main(){
   int n,i;
   double m,x,y,z,result;
   cin>>n;
   for(i=0;i<n;i++){
   	cin>>m>>x>>y>>z;
   	  result=m*x/(y-x)*z;
   	  cout<<fixed<<setprecision(2)<<result<<endl;
   }
	return 0;
}

