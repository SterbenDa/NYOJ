//³¬Ê±¹·±Æ 
/*#include <iostream>
#include <cstdio>
#include <string.h>
using namespace std;
int main(){
	long long n;
	int sum=0;
	while(scanf("%lld",&n)==1){
	  if(n==0){
	  	sum+=64;
	  	continue;
	  }
	  while(n&&n%2==0){
	  	sum++;
	  	n/=2;
	  }
	}
	printf("%d\n",sum);
	return 0;
}*/
#include <iostream>
#include <cstdio>
#include <string.h>
using namespace std;
int main(){
	char c;
	long long x=0;
	long long sum=0;
	while(~(c=getchar())){
		if(c>='0'&&c<='9') 
		 x=x*10+c-'0';
		else{
			if(x==0)
			{
				sum+=64;
				continue;
			}
			while(x&&x%2==0){
				 sum+=1;
				 x=x>>1;
			}			 
			x=0;
		}
	} 
	printf("%d\n",sum);
	return 0;
}
