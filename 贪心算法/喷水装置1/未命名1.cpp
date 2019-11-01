#include "iostream"
#include "math.h"
#include "algorithm"
using namespace std;
int main(){
    int t,n,i;
    double a[650];
    cin>>t;
    while(t--){
    	double len=20.0;
    	int num=0;
    	cin>>n;
    	for(i=0;i<n;i++)
    	cin>>a[i];
    	sort(a,a+n);
    	for(i=n-1;i>=0;i--){
    			len-=2*sqrt(a[i]*a[i]-1);
    			num++;
    		if(len<0)
    		break;
    	}
    	cout<<num<<endl;
    }
	return 0;
}
