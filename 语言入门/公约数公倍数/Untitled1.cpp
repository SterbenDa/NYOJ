#include "iostream"
using namespace std;
int main(){
	int gys(int a,int b);
   int n,i,x,y,z;
   cin>>n;
   for(i=0;i<n;i++){
   	    cin>>x>>y;
   	    z=gys(x,y);
   	    cout<<z<<" "<<x*y/z<<endl;
   }
	return 0;
}
int gys(int a,int b)
{
	if(a<b){
		int temp=a;
		a=b;
		b=temp;
	}
   int r;
	while(b!=0){
		r=a%b;
		a=b;
		b=r;
	}
	return a;
}





