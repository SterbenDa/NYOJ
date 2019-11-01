#include <iostream>
#include <cstdio>
#include <string.h>
#include <map>
using namespace std;
int slen,tlen,word_len,big;
char word[160][105],text[1000050];
int num[160];
int next[120];
map<string,int> ma;
int main(){
	void getnext(int);
	void kmp(int);
	int t,i,n;
	scanf("%d",&t);
	while(t--){
		big=-99999999;
		word_len=0;
		scanf("%d",&n);
		for(i=0;i<n;i++){
			scanf("%s",word[word_len]);
			if(ma[word[word_len]]==1)
			   	continue;			   
			ma[word[word_len]]=1;
			num[word_len]=0;		
			word_len++;
		}
		scanf("%s",text);
		tlen=strlen(text);		
		for(i=0;i<word_len;i++){
			slen=strlen(word[i]);
			getnext(i);
			kmp(i);
			if(big<num[i])
				big=num[i];			
		}
		printf("%d\n",big);
		for(i=0;i<word_len;i++)
		if(num[i]==big)
		 printf("%s\n",word[i]);
		ma.clear();
	}
	return 0;
}
void getnext(int now){
	int j=0,k=-1;
	next[0]=-1;
	while(j<slen){
		if(k==-1||word[now][j]==word[now][k])
		   next[++j]=++k;
		else
		   k=next[k];
	}
}
void kmp(int now){
	int i=0,j=0;
	while(i<tlen&&j<slen){
		if(j==-1||text[i]==word[now][j]){
			i++;j++;
		}
		else
		  j=next[j];
		  if(j==slen)
		  {
		  	num[now]++;
		  	j=next[j];
		  }
	}
}
