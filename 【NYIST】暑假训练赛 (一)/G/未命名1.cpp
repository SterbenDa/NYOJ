#include <iostream>
#include <cstdio>
#include <algorithm>
#include <string.h>
using namespace std;
bool ok;
int m,len;
int a[100001];
int main(){
	void dfs(int now,int sum);	
	string s;
	int i,tmp;
	char c;
	while(getline(cin,s)){
		cin>>m;
		len=0;
		ok=0;
		tmp=0;
		for(i=0;s[i]!='\0';i++){
			if(s[i]>='0'&&s[i]<='9')
			tmp=tmp*10+s[i]-'0';
			else{
				if(tmp==m){
					ok=1;
					break;
				}
				if(tmp<m){
					a[len++]=tmp;
				}
				
				tmp=0;
			}
		}
		if(!ok){
			sort(a,a+len);
	     	dfs(0,0);
		} 	
		if(ok)
		cout<<"Yes"<<endl;
		else
			cout<<"No"<<endl;
		c=getchar();
	}	
	return 0;
}
void dfs(int now,int sum){
	if(ok)
	return;
	if(sum==m){
		ok=1;
		return;
	}
	if(sum>m||now>=len)
	return ;
	dfs(now+1,sum);
	if(ok)
	return ;
	dfs(now+1,sum+a[now]);
}
