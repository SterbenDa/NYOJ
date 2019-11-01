#include <iostream>
#include <cstdio>
#include <algorithm>
#include <string.h>
#include <vector>
using namespace std;
vector<string> ve1[10],ve2[10];
int n;
bool cmp1(string s1,string s2){
	 int len1=s1.length();
	int  len2=s2.length();
	if(len1==1||len2==1)
	   return len1>len2;
	 else{
	 int i;
	 	for( i=0;i<len1&&i<len2;i++)
	 	 if(s1[i]!=s2[i])
	 	 return s1[i]<s2[i];
	 	if(i==len1)
	 	   return 1;
	 	else if(i==len2)
	 	  return 0;
	 }
}
bool cmp2(string s1,string s2){
	int len1=s1.length();
	int  len2=s2.length();
	if(if(len1==1||len2==1)
	   return len1<len2;)
		for( i=0;i<len1&&i<len2;i++)
	 	 if(s1[i]!=s2[i])
	 	 return s1[i]>s2[i];
}
int main(){
	int t,i,j;
	string tmp;
	scanf("%d",&t);
	while(t--){
			string a="",b="";
		scanf("%d",&n);
			for(i=0;i<n;i++){
				cin>>tmp;
				ve1[tmp[0]-'0'].push_back(tmp);
					ve2[tmp[0]-'0'].push_back(tmp);
			}
         for(i=1;i<10;i++){
         	sort(ve1[i].begin(),ve1[i].end(),cmp1);
         	//sort(ve2[i].begin(),ve2[i].end(),cmp2);
		 }
         
         for(i=1;i<10;i++)
         	for(j=0;j<ve1[i].size();j++){
         		a=ve1[i][j]+a;
         	    b=b+ve1[i][j];
			 }    	
		 cout<<a<<"  "<<b;
		 for(i=1;i<10;i++)
		   ve1[i].clear();
	 }
	return 0;
}


/*
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <string.h>
using namespace std;
const int N=1005*40;
const int M=N*40;
int a[M],b[M],c[M];
char bb[N][40];
int tmp[40];
int n;
bool cmp(char x[40],char y[40]){
	int i=0;
	while(x[i]==y[i])
    {
	i++;
	 }	 
	 return x[i]<y[i];
}
int main(){
	int t,i,j,len;
	scanf("%d",&t);
	while(t--){
		len=0;
		scanf("%d",&n);
			for(i=0;i<n;i++)
				scanf("%s",bb[i]);
		sort(bb,bb+n,cmp);
		for(i=0;i<n;i++){
			j=0;
			while(bb[i][j]!='\0')			
			b[len++]=bb[i][j]-'0';	     
		}
		for(j=0,i=len-1;i>=0;i--,j++)
		   a[j]=b[i];
		   int tmp=0;
	    for(i=len-1;i>=0;i--){
	    	c[i]=a[i]-b[i]-tmp;
			if(c[i]<0){
				c[i]+=10;
				 tmp=1;
			}
			else
			  tmp=0;				    	
		}
		for(i=0;i<len;i++)
		  printf("%d",c[i]);
		   printf("\n");
	}
	return 0;
}*/
