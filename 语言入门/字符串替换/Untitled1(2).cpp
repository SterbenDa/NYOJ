#include "stdio.h"
int main(){
	char c[1000];
	int i;
	while(gets(c)!=NULL){
		char s[1000];
		int now=0;
	//	bool flag=0;
		for(i=0;c[i]!='\0';i++){
			if(c[i]=='y'&&c[i+1]=='o'&&c[i+2]=='u'&&c[i+1]!='\0'&&
			c[i+1]!='\0'){
				s[now++]='w';
				s[now++]='e';
				i+=2;
			//	flag=0;
			  continue;
		}
		  else
		  s[now++]=c[i];
		/*	if(c[i]==' '&&flag==0){
				flag=1;
				s[now++]=' ';
				continue;
			if(c[i]!=' '){
				flag=0;
				s[now++]=c[i];
			} */
		}
		s[now]='\0';
		printf("%s\n",s);
	}
	return 0;
}
