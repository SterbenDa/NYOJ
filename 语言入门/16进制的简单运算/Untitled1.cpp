#include "stdio.h"
int main(){
	int n,i,j;
	 scanf("%d",&n);
	 char s[16];
	  for(i=0;i<n;i++){
	  	long long a=0,b=0,result=0;
	    int re[10],now=0; 
	  	char c;
	  	 scanf("%s",&s);
	  	 for(j=0;s[j]!='+'&&s[j]!='-';j++){
	  	 	if(s[j]>='0'&&s[j]<='9')
	  	 	    a=a*16+s[j]-'0';
	  	 	    else
	  	 	    a=a*16+s[j]-'a'+10;
	  	 }
	  	 c=s[j++];
	  	 for(;s[j]!='\0';j++){
	  	 		if(s[j]>='0'&&s[j]<='9')
	  	 	    b=b*16+s[j]-'0';
	  	 	    else
	  	 	    b=b*16+s[j]-'a'+10;
	  	 }
	  	 if(c=='+')
	  	 result=a+b;
		   else if(c=='-')	  
		result=a-b;
		if(result<0){
			result=-result;
			while(result!=0){
				re[now++]=result%8;
				result/=8;
			}
		printf("-");
			for(j=now-1;j>=0;j--)
			printf("%d",re[j]);
			printf("\n");
		}
		else{
			while(result!=0){
				re[now++]=result%8;
				result/=8;
			}
		   for(j=now-1;j>=0;j--)
			printf("%d",re[j]);
			printf("\n");
		}	   	 
	  }
	return 0;
}

