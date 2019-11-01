#include "iostream"
using namespace std;
int main(){
    int n,i;
    double x,y,z;
    cin>>n;
    for(i=0;i<n;i++){
      cin>>x>>y>>z;
	  if(x+y-z>-0.00001&&x+y-z<0.00001)
	  cout<<"Yes"<<endl;
	  else
	  cout<<"No"<<endl;   
}
	return 0;
}
