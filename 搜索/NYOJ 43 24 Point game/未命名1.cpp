


#include <iostream>
#include <cstdio>
#include <string.h>
#include <math.h>
#define NUM 1e-6
using namespace std;
double a[6],re;
int n;
bool dfs(int x){
	if(x==n-1){
		 if(fabs(re-a[x])<NUM)
	      return true;
	      return false;
	}	
	 int i,j;
	 for(i=x;i<n;i++)
	 for(j=i+1;j<n;j++){
	 	double le=a[i],ri=a[j];
	 	a[i]=a[x];
	 	a[j]=le+ri;	   if(dfs(x+1))  return true;
	 	a[j]=le-ri; 	if(dfs(x+1))  return true;
		a[j]=le*ri;  	if(dfs(x+1))  return true;
	 	a[j]=ri-le;  	if(dfs(x+1))  return true;
	 	if(ri!=0){
	 		a[j]=le/ri;	if(dfs(x+1))  return true;
		 }	 
	 	if(le!=0){
	 			a[j]=ri/le;	if(dfs(x+1))  return true;
		 }	 	
		 a[i]=le;
		 a[j]=ri; 	
	 }	  
	 return false; 
}
int main(){
	int t,i;
	scanf("%d",&t);
	while(t--){
		scanf("%d%lf",&n,&re);
		for(i=0;i<n;i++)
			scanf("%lf",&a[i]);	
		if(dfs(0))
		printf("Yes\n");
		else
		 printf("No\n");
		
	}
	return 0;
}

