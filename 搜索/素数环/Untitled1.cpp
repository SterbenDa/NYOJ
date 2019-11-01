
//优化 改成C 
#include "stdio.h"
bool book[40];
bool use[20]; 
int n;
int a[20];
bool ok;
int main(){
	void dfs(int now);
	bool check(int a);
	int i,num=0;
	for(i=2;i<40;i++){
	   if(check(i))
	    book[i]=1;
	    else
	    book[i]=0;
	}
	while(scanf("%d",&n)==1){
		if(n==0)
		  break;
		  num++;
		  ok=0;
		  for(i=1;i<=n;i++){
		   use[i]=0;
	}
		printf("Case %d:\n",num);
		//优化 
		//如果n是奇数  必有一个奇数与另一个奇数配对成偶数 肯定不是素数 
		if(n!=1&&n%2==1) {
		printf("No Answer\n");
			continue;
		}
		a[0]=1;
	    dfs(1);
	    if(ok==0)
	   	printf("No Answer\n");
	}
	return 0;
}
void dfs(int now){
	int i;
	if(now>=n){
		if(book[a[0]+a[n-1]]==1){
			ok=1;
			for(i=0;i<n;i++)
			printf("%d ",a[i]);
			printf("\n");
		}
		return;
	}
	for(i=2;i<=n;i++){
		if(use[i]==1)
		continue;
		if(book[a[now-1]+i]==0)
		continue;
		use[i]=1;
		a[now]=i;
		dfs(now+1);
		use[i]=0;
	}
}

bool check(int a){
	int i;
	for(i=2;i*i<=a;i++)
	  if(a%i==0)
	  return false;
	return true;
}



















/*
题目要求以1开头 去掉了重复 所以这里不合适 错误的 
#include "iostream"
#include "algorithm"
using namespace std;
int main(){
	bool check(int a);
	bool book[40];
	int a[20];
	int n,i,num=0;
	for(i=2;i<40;i++){
	   if(check(i))
	    book[i]=1;
	    else
	    book[i]=0;
	}
	while(cin>>n){
		if(n==0)
		  break;
		  num++;
		  for(i=0;i<n;i++)
		   a[i]=i+1;
		   cout<<"case "<<num<<":"<<endl;
	   do{
	   	bool ok=1;
	   	  for(i=0;i<n-1;i++){
	   	  	if(book[a[i]+a[i+1]]==0)
	   	  {
	   	      ok=0;
			  break;	
	   	  }
	   	  	if(book[a[0]+a[n-1]]==0){
	   	  		ok=0;
	   	  	}
	   	  }
	   	  if(ok){
	   	    for(i=0;i<n;i++)
	   	    cout<<a[i]<<" ";
	   	 cout<<endl;   
	   	}
	   }while(next_permutation(a,a+n));
	}
	return 0;
}
bool check(int a){
	int i;
	for(i=2;i*i<=a;i++)
	  if(a%i==0)
	  return false;
	return true;
}
*/

