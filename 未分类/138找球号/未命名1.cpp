#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;
int next[11];
const int ll=100000000;
const int mod=100003;
const int key=131;
vector<int> ve[mod+1];
//vector<int>::iterator ve_i;
inline void Hash(int n);
inline bool check(int n);
int main(){
	
	int n,m,i;
	string s;
	next[0]=key;
	for(i=1;i<=10;i++)
	  next[i]=next[i-1]*key%mod;
	scanf("%d",&n);
	while(n--){
		cin>>s;
		if(s=="ADD"){
			scanf("%d",&m);
		   while(m--){
			scanf("%d",&i);
			  Hash(i);
		}	
		}
		else{
			scanf("%d",&m);
			while(m--){
			scanf("%d",&i);
			if(check(i))
			printf("YES\n");
			else
			printf("NO\n");
		}
		}
		
	}
	return 0;
}
inline void Hash(int n){
	unsigned int hash=0;
	unsigned int tmp=n;
	int now=0;
	while(tmp){
	    hash+=tmp*next[now++]%mod;
	    tmp/=10;
	}
	hash%=mod;
	ve[hash].push_back(n);
}
inline bool check(int n){
	unsigned int hash=0;
	unsigned int tmp=n;
	int now=0,i=0;
	while(tmp){
	    hash+=tmp*next[now++]%mod;
	    tmp/=10;
	}
	hash%=mod;
	for(i=0;i<ve[hash].size();i++)
	    if(ve[hash][i]==n)
	    return true;
	    return false;
}
