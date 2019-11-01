#include "iostream"
#include <iomanip>
using namespace std;
int main(){
	double pi=3.1415926;
    int n,i;
    double m,r,j;
     cin>>n;
    for(i=0;i<n;i++){
    	cin>>m;
    	r=m*m/3.0;
      cout<<fixed<<setprecision(2)<<pi*r<<endl;
    }
	return 0;
}
