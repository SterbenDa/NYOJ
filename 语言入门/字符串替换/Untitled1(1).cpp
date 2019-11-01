#include "stdio.h"
int main(){
	char c[1000];
	int i;
	while(gets(c)!=NULL){
		char s[1000];
		int now=0;
		for(i=0;c[i]!='\0';i++){
			if(c[i]=='y'&&c[i+1]=='o'&&c[i+2]=='u'){
				s[now++]='w';
				s[now++]='e';
				i+=2;
			  continue;
		}
			if(c[i]==' ')  
		}
	}
	return 0;
}
