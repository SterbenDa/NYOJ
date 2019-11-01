//网上答案
//将n个数字全排列->每次只截取前m个->与之前的比较看是否重复 
#include <cstdio>  
#include <cstring>  
#include <algorithm>  
char a[10]={'1','2','3','4','5','6','7','8','9','\0'};//给定一个大小顺序排号的数组  
using namespace std;  
int main()  
{  
  int t,n,m;  
  char b[10],c[10];  
  scanf("%d",&t);  
  while(t--)  
  {  
      scanf("%d%d",&n,&m);  
      strcpy(b,a);//全排列是按字典序开始的，所以第一组数据是从小到大的，直接复制；  
      b[m]='\0';//复制前面m个  
      printf("%s\n",b);  
      while(next_permutation(a,a+n))//给数组进行全排列  
      {  
          strcpy(c,a);  
          c[m]='\0';  
          if(strcmp(b,c))//判断b,c数组是否相等  
          {  
              strcpy(b,c);//依次把全排列后面的顺序输出  
              b[m]='\0';  
              printf("%s\n",b);  
          }  
      }  
  }  
  return 0;  
}   



/*还不能满足题目要求 没按顺序 因为这个代码是找出每个组合然后全排列  
#include "iostream"
#include "algorithm"
using namespace std;
int n,m;
void print();
int num[9]={0,1,2,3,4,5,6,7,8};
int a[9];
int main(){
	int t,i;
	void dfs(int time,int sum);
	cin>>t;
	while(t--){
		cin>>n>>m;
		dfs(0,1);
	}
	return 0;
}
void dfs(int time,int now){
	if(time==m){
		print();
	return;	
	}
	if(now>n)  	
		return;	
	a[time]=num[now];
	dfs(time+1,now+1);
	dfs(time,now+1);
}

void print(){
	int i;
	sort(a,a+m);
	do{
		for(i=0;i<m;i++)
		cout<<a[i];
		cout<<endl;
	}while(next_permutation(a,a+m));
} 
*/





 /*AC 自己的代码 
#include "iostream"
using namespace std;
string num[9]={"0","1","2","3","4","5","6","7","8"};
bool book[9];
int n,m;
int main(){
	int t,i;
	void dfs(int time,string s);
	cin>>t;
	while(t--){
		cin>>n>>m;
		for(i=1;i<=n;i++)
		book[i]=0;
			
		dfs(0,"");
	}
	return 0;
}
void dfs(int time,string s){
	int i;
	if(time==m){
		cout<<s<<endl;
	  return ;
	}
	for(i=1;i<=n;i++){ 
	if(book[i]==1)
	continue; 
	book[i]=1;
	dfs(time+1,s+num[i]); 
	book[i]=0;
	} 
}
*/



