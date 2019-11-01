/*还是一道模拟题。
和上次的A+B四类似，先记录每个数字的符号，然后把符号去掉，处理每个数字的前缀0和后缀0，然后比较。
需要注意的是：
1、删前缀0的时候，整数必须保留一位。
2、只有小数才删后缀0。
3、注意+0 == -0。
[cpp] view plaincopy*/
#include <stdio.h>  
#include <ctype.h>  
#include <string.h>  
#include <stdlib.h>  
const int M=100000;  
void back(char* c,int &l)  
{  
    if(strchr(c,'.') == NULL)           //整数不用处理后缀  
        return ;  
    for(int i=l-1;i>=1;i--)             //删除后缀0  
    {  
        if(c[i]!='0')  
            break;  
        l--;  
    }  
    if(c[l-1]=='.')  
        l--;  
    c[l]='\0';  
    //puts("after back->");  
    //puts(c);  
}  
void front(char* c,int &l,bool &f)  
{  
    int cnt = isdigit(c[0]) ? 0 : 1;    //cnt记录前缀0和符号的个数  
    if(c[0]=='-')  
        f = false;  
    for(int i=cnt;i<l-1;i++)            //l-1保证c为整数时留一位整数  
    {  
        if(c[i+1]=='.' || c[i]!='0')    //c[i+1]=='.'保证c为小数时留一位整数  
            break;  
        cnt++;  
    }  
    if(cnt)  
    {  
        for(int i=0;i<l-cnt;i++)        //把字符串整体向前移cnt位  
            c[i] = c[i+cnt];  
        c[l-cnt] = '\0';  
    }  
    //puts("after front->");  
    //printf(f?"+ ":"- ");  
    //puts(c);  
}  
void deal(char *c,bool &f)  
{  
    int l = strlen(c);  
    f = true;                           //f记录符号，初始为正  
    back(c,l);  
    front(c,l,f);  
}  
bool Cmp(char* A,char* B,bool a,bool b)  
{  
    if(strcmp(A,B) == 0)   //字符串相同才考虑 
    {  
        if(strcmp(A,"0") == 0 || a^b == 0)  //符号相同或都为0 
            return true;  
    }  
    return false;  
}  
int main()  
{  
    char A[M],B[M];  
    bool a,b;  
    while(~scanf("%s%s",A,B))  
    {  
        deal(A,a);  
        deal(B,b);  
        puts(Cmp(A,B,a,b)?"YES":"NO");  
    }  
  
    return 0;  
}  


















/*
#include "iostream"
using namespace std;
int main(){
	string s1,s2;
	int head1,head2,tail1,tail2,i;
	bool fuhao1,fuhao2;
	while(cin>>s1>>s2){
		if(s1[0]=='-'){
		fuhao1=0;
		for(i=1;s1[i]!='0';i++){}
		head1=i;
		for(i=s1.length()-1;s1[i]!='0';i--){}
		tail1=i;
		}
		else{
			fuhao1=1;
			if(s1[0]=='+'){
					for(i=1;s1[i]!='0';i++){}
		head1=i;
		for(i=s1.length()-1;s1[i]!='0';i--){}
		tail1=i;
			}
			else{
					for(i=0;s1[i]!='0';i++){}
	         	head1=i;
		for(i=s1.length()-1;s1[i]!='0';i--){}
		     tail1=i;
			}
		}
		
		if(s2[0]=='-'){
		fuhao2=0;
		for(i=1;s2[i]!='0';i++){}
		head2=i;
		for(i=s2.length()-1;s2[i]!='0';i--){}
		tail2=i;
		}
		else{
			fuhao2=1;
			if(s2[0]=='+'){
					for(i=1;s2[i]!='0';i++){}
		head2=i;
		for(i=s2.length()-1;s2[i]!='0';i--){}
		tail2=i;
			}
			else{
					for(i=0;s2[i]!='0';i++){}
	         	head2=i;
		for(i=s2.length()-1;s2[i]!='0';i--){}
		     tail2=i;
			}
		}

       
		cin>>s1;
	}
	 return 0;
}*/
