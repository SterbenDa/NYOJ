#include "iostream"
using namespace std;
int main(){
	int n,i,rabbit,hen,num,leg;
	cin>>n;
	for(i=0;i<n;i++){
	   cin>>num>>leg;
	   bool ok=0;
	   for(rabbit=0;rabbit<=leg/4;rabbit++)
	     for(hen=0;hen<=leg/2;hen++)
	      if(rabbit+hen==num&&rabbit*4+hen*2==leg)
	      {
	      	ok=1;
	      cout<<hen<<" "<<rabbit<<endl;   
	  }
	  if(ok==0)
	  cout<<"No answer"<<endl;
	}
	return 0;
}
