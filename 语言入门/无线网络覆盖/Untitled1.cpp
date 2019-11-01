#include "iostream"
#include "math.h"
using namespace std;
int main(){
	int n,i;
	cin>>n;
	double l,d,r;
	for(i=0;i<n;i++){
		cin>>l>>d>>r;
		double x,length=0.0;
		int num=1;
		if((double)d/2.0>=r){
			cout<<"impossible"<<endl;
			continue;
		}
		x=sqrt((double)(r*r)-(double)(d*d)/4.0);
		if(2.0*x<1.0)
		cout<<"impossible"<<endl;
		else{
			length+=2*x;
			while(length<l){
			   num++;
			   length+=2*x;
		}
			   cout<<num<<endl;
		}
	}
	return 0;
}
