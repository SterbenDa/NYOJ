/*
把一个整数X展开成如下形式：
X=a[n]*(n-1)!+a[n-1]*(n-2)!+...+a[i]*(i-1)!+...+a[2]*1!+a[1]*0![1] 
其中，a为整数，并且0<=a[i]<i(1<=i<=n)

a[i]表示当前位置的值在全部中未出现过的排第几大（从0开始） 
*/
#include <cstdio>
#include <string.h>
using namespace std;
int main(){
	int per[12]={1,1,2,6,24,120,720,5040,40320,362880,3628800,39916800};
	int a[12]={0,1,2,3,4,5,6,7,8,9,10,11};
	bool book[13];
	char c[15];
     int t,i,j,k,tmp;
     scanf("%d",&t);
     while(t--){
     	scanf("%s",c);
     	tmp=0;
     	memset(book,0,sizeof(book));
     	for(i=0;i<12;i++){
     		k=0;
     		for(j=0;j<12;j++)
     		if(j<(c[i]-'a')&&book[j]==0)
     		k++;
     		book[c[i]-'a']=1;
     		tmp+=k*per[11-i];
		 }
		 printf("%d\n",tmp+1);
	 } 
	return 0;
}



/*#include <cstdio>
#include <string.h>
#include <algorithm>
using namespace std;
int kangtuo[479001600];
int main(){
	char c[15];
	int num=1,i,tmp; 
	int a[13]={-1,1,2,3,4,5,6,7,8,9,10,11,12};
	int per[12]={1,1,2,6,24,120,720,5040,40320,362880,3628800,39916800};
	do{
		tmp=0;
		for(i=12;i>0;i--)
		 tmp+=a[i]*per[i-1];
	    kangtuo[tmp]=num++;
	} while(next_permutation(a+1,a+13));
	scanf("%d",&num);
	while(num--){
		scanf("%s",c);
		tmp=0;
		for(i=strlen(c)-1;i>=0;i--)
		 tmp+=(int)(c[i]-'a')*per[i];
		 printf("%d\n",kangtuo[tmp]);
	}
	return 0;
}*/
