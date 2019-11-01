#include <iostream>
#include <cstdio>
#include <string.h>
using namespace std;
int book[80001];
bool color[40001];
int main(){
	int n,m,choice,l,r,c,d,i,sum,num,re;
	while(scanf("%d%d",&n,&m)==2){
		re=0;
		num=0;
		memset(color,0,sizeof(color));
		memset(book,0,sizeof(book));
	  while(m--){
	  	scanf("%d",&choice);
	  	if(choice==1){
	  		scanf("%d%d%d%d",&l,&r,&c,&d);
	  		if(color[c]!=1){
	  			color[c]=1;
	  			num++;
			  }
	  		for(i=l;i<r;i++){
	  			//re-=book[i];
	  		 book[i]+=d;
	  		 re+=d;
			  }
		  }else{
		  	sum=0;
		  	scanf("%d%d",&l,&r);
		  	for(i=l;i<r;i++)
		  	sum+=book[i];
		  	printf("%d\n",sum);
		  }
	  }
	   printf("%d %d\n",re,num);
	}
	return 0;
}
