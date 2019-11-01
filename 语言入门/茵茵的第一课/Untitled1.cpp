#include "stdio.h"
int main(){
    int i,n;
    scanf("%d",&n);
    char s[100]; 
    gets(s);
    for(i=0;i<n;i++){
      gets(s);
     printf("%s\n",s);
    }
	return 0;
}



/*  你妈的超时可能吗 
#include "stdio.h"
int main(){
    int i,n;
   char c;
    scanf("%d",&n);
     c=getchar();
    for(i=0;i<n;i++){
       c=getchar();
       while(c!='\n'){
         printf("%c",c);
        c=getchar();  
     }
        printf("\n");

    }
	return 0;
}
*/


