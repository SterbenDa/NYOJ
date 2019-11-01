#include <iostream>
using namespace std;
int main(){
    int k=2,i;
  for(i=2;i<=110;i++)
  {
  	k*=2;
  	k%=1000;
  }
   cout<<k;
	return 0;
}
