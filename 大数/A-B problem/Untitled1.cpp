/*����һ��ģ���⡣
���ϴε�A+B�����ƣ��ȼ�¼ÿ�����ֵķ��ţ�Ȼ��ѷ���ȥ��������ÿ�����ֵ�ǰ׺0�ͺ�׺0��Ȼ��Ƚϡ�
��Ҫע����ǣ�
1��ɾǰ׺0��ʱ���������뱣��һλ��
2��ֻ��С����ɾ��׺0��
3��ע��+0 == -0��
[cpp] view plaincopy*/
#include <stdio.h>  
#include <ctype.h>  
#include <string.h>  
#include <stdlib.h>  
const int M=100000;  
void back(char* c,int &l)  
{  
    if(strchr(c,'.') == NULL)           //�������ô����׺  
        return ;  
    for(int i=l-1;i>=1;i--)             //ɾ����׺0  
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
    int cnt = isdigit(c[0]) ? 0 : 1;    //cnt��¼ǰ׺0�ͷ��ŵĸ���  
    if(c[0]=='-')  
        f = false;  
    for(int i=cnt;i<l-1;i++)            //l-1��֤cΪ����ʱ��һλ����  
    {  
        if(c[i+1]=='.' || c[i]!='0')    //c[i+1]=='.'��֤cΪС��ʱ��һλ����  
            break;  
        cnt++;  
    }  
    if(cnt)  
    {  
        for(int i=0;i<l-cnt;i++)        //���ַ���������ǰ��cntλ  
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
    f = true;                           //f��¼���ţ���ʼΪ��  
    back(c,l);  
    front(c,l,f);  
}  
bool Cmp(char* A,char* B,bool a,bool b)  
{  
    if(strcmp(A,B) == 0)   //�ַ�����ͬ�ſ��� 
    {  
        if(strcmp(A,"0") == 0 || a^b == 0)  //������ͬ��Ϊ0 
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
