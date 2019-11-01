#include "iostream"
#include "iomanip"
#include "math.h"
using namespace std;
int main(){
	int t,i,j;
	double x1,x2,y1,y2;
	cin>>t;
	for(i=0;i<t;i++){
		double result=0.0;
	   cin>>x1>>y1>>x2>>y2;
	   result=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
	   cout<<fixed<<setprecision(2)<<result<<endl;
	}
	return 0;
}
