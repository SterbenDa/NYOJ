#include <iostream>
#include <cstdio>
#include <set>
using namespace std;
int n,l,r,s;
int a[20];
int num;
//set<int> se;
int main(){
	set<int>::iterator it;
	void dfs(int now,int sum,int count,int big,int small);
	int i,tmp;
	while(scanf("%d%d%d%d",&n,&l,&r,&s)==4){
		num=0;
	//	se.clear();
		for(i=0;i<n;i++){
			scanf("%d",&a[i]);
			//se.insert(tmp);
		}
	//	n=se.size();
	//		printf("%d\n",n);
		//i=0;		
/*	for(it=se.begin();it!=se.end();it++){
			a[i++]=*it;
		//	printf("%d\n",*it);
		}*/	   
		dfs(0,0,0,-99999999,99999999);
		printf("%d\n",num);
	}
	return 0;
}
void dfs(int now,int sum,int count,int big,int small){	
	if(sum>=l&&sum<=r&&count>=2&&big-small>=s){
		num++;
		return;
	}  
	if(sum>r||now>=n)
	return;
	dfs(now+1,sum,count,big,small);
	if(big<a[now])
	  big=a[now];
	  if(small>a[now])
	   small=a[now];
	dfs(now+1,sum+a[now],count+1,big,small);
}

