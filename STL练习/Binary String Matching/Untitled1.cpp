#include "cstdio"
#include "cstring"
using namespace std;
int main(){
	int n,i,j,k;
	char a[15];
	char b[1050];
	while(scanf("%d",&n)==1){		
		for(i=0;i<n;i++){
			int sum=0;
			scanf("%s%s",a,b);
			int len=strlen(a);
			for(j=0;b[j]!='\0';j++){
				int tmp=j;
				for(k=0;a[k]!='\0';k++){
					if(b[tmp]!='\0'){
				if(b[tmp]==a[k])
					tmp++;
					else
					break;
				}
				else
				break;
				}
				if(k==len)
				sum++;
			}
			printf("%d\n",sum);
		}
	}
	return 0;
}
