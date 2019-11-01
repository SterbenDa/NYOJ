#include <iostream>
#include <cstdio>
#include <string.h>
#include <cmath>
using namespace std;
const int pai=3.1415927;
int main(){
	int n,R,r;
	while(cin>>n>>R>>r){
		if(R==r){
		  if(n>1)
		  	 printf("NO\n");
		  	 else
		  	 printf("YES\n");
		} 
		else if(r>R||(2*r==R&&n>2))
		 printf("NO\n");
		 else{
		 //	printf("%lf",atan((double)(r)/(double)(R-r)));
		 	int num=pai/atan((double)(r)/(double)(R-r));
		 	if(n>num)
		 	 printf("NO\n");
		 	 else
		 	 printf("YES\n");
		 }	 
	}
	return 0;
}
