











/*³¬Ê± 
#include "stdio.h"
#define MOD 1000007
long long f[100000001];
int main(){
	int t,i,a,b,c,n,j;
	scanf("%d",&t);
	for(i=0;i<t;i++){
		scanf("%d %d %d %d %d %d",&f[1],&f[2],&a,&b,&c,&n);
		for(j=3;j<=n;j++)
		f[j]=(a*f[j-2]+b*f[j-1]+c)%MOD;
		printf("%ld\n",f[n]);
	}
	return 0;
}
*/
