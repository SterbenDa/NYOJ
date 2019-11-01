#include <iostream>
#include <cstdio>
#include <string.h>
#include <math.h>
using namespace std;
int main(){
	int n=0;
	double sum=0;
	while(sum<18){
		  sum+=log10(2);
		  n++;
		  cout<<sum<<endl;
	}
	 if((sum-77)>(77-(sum-log10(2))))
         n--;
	   cout<<n;
	return 0;
}

