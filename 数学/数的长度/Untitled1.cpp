#include "iostream"
#include "math.h"
using namespace std;
int main(){
	int n,i,j,k;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>k;
		double sum=0.0;
		for(j=2;j<=k;j++)
		  sum+=log10(j);
		cout<<(int)sum+1<<endl; 
	}
	return 0;
}
