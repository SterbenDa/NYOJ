//���ϴ�
//��n������ȫ����->ÿ��ֻ��ȡǰm��->��֮ǰ�ıȽϿ��Ƿ��ظ� 
#include <cstdio>  
#include <cstring>  
#include <algorithm>  
char a[10]={'1','2','3','4','5','6','7','8','9','\0'};//����һ����С˳���źŵ�����  
using namespace std;  
int main()  
{  
  int t,n,m;  
  char b[10],c[10];  
  scanf("%d",&t);  
  while(t--)  
  {  
      scanf("%d%d",&n,&m);  
      strcpy(b,a);//ȫ�����ǰ��ֵ���ʼ�ģ����Ե�һ�������Ǵ�С����ģ�ֱ�Ӹ��ƣ�  
      b[m]='\0';//����ǰ��m��  
      printf("%s\n",b);  
      while(next_permutation(a,a+n))//���������ȫ����  
      {  
          strcpy(c,a);  
          c[m]='\0';  
          if(strcmp(b,c))//�ж�b,c�����Ƿ����  
          {  
              strcpy(b,c);//���ΰ�ȫ���к����˳�����  
              b[m]='\0';  
              printf("%s\n",b);  
          }  
      }  
  }  
  return 0;  
}   



/*������������ĿҪ�� û��˳�� ��Ϊ����������ҳ�ÿ�����Ȼ��ȫ����  
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





 /*AC �Լ��Ĵ��� 
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



