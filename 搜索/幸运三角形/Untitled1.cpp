/*
#include"iostream"
  #include<cstring>
  #include<stdio.h>
  #include<time.h>
  using namespace std;
  typedef unsigned char uchar;
  
  //char cc[2]={'+','-'};    //�������
  int n,                     //��һ�з�������
     half,                 //ȫ����������һ��
    counter;             //1��������  '-' �ż���
    
 char **p;                //���Ŵ洢�ռ�    
 long sum;                //���������������μ���

 //t����һ�е� t������
 void Backtrace(int t)
 {
    int i, j;
     
    if( t > n )
       sum++;
     else
     {
        for(i=0; i<2; ++i)  //ֻȡ  0('+')  ����  1('-')
        {
            p[1][t] = i;   //��һ�е� t������
             counter += i;        //'-'��ͳ��
            for(j=2; j<=t; ++j)    //����һ�з��� >=2ʱ����������������е�ĳЩ���ţ���һ���м������Ϳ�����Ӧ���¼��㼸�У�ÿ�μ�����ľͲ����ظ����㣩 
            {
                p[j][t-j+1] = p[j-1][t-j+1]^p[j-1][t-j+2];//ͨ������������з���
                counter += p[j][t-j+1];                        
             }
            if( (counter <= half) && ( t*(t+1)/2 - counter <= half) )//������ͳ��δ����������������һ�ַ���Ҳδ��������
                 Backtrace(t+1);            //�ڵ�һ��������һ������    
             //���ݣ��ж���һ�ַ������
             for(j=2; j<=t; ++j)    
                 counter -= p[j][t-j+1];         
            counter -= i;
        }
     }
 }
 
 int main()
 {  
     while(scanf("%d", &n) != EOF)
     {
         counter = 0;
      sum = 0;
     half = n*(n+1)/2;
         
         if( half%2 == 0 )//������Ϊż������Ϊ�������޽�
         {
             half /= 2;
             p = new char *[n+1];
            for(int i=0; i<=n; ++i)
            {
              p[i] = new char[n+1];
               memset(p[i], 0, sizeof(char)*(n+1));
             }   
             Backtrace(1);
         }    
         printf("%d\n", sum);
     }
     return 0;
}
*/

/*
#include "iostream"
using namespace std;
int result[21]={0,0,0,4,6,0,0,12,40,0,0,171,410,0,0,1896,5160,0,0,32757};
int main(){
	int n;
	while(cin>>n){
		cout<<result[n]<<endl;
	}
	return 0;
}
*/

#include "iostream"
using namespace std;
int result[30];
int a[30][30];
int sum;
int main(){
	int i,k,j,n;
    void dfs(int n,int time,int jia);
	for(i=1;i<20;i++){
		if(i*(i+1)/2%2==1)
		{
		  result[i]=0;
		  continue;
	}
		sum=0;
	  dfs(i,0,0);
	  result[i]=sum;
	}
	while(cin>>n){
		cout<<result[n]<<endl;
	}
	return 0;
}
void dfs(int n,int time,int jia){
	if(jia*4>n*(n+1))
	return ;
	if(time>=n){
		int i,j;
		for(i=1;i<n;i++)
		for(j=0;j<n-i;j++){
			if(a[i-1][j]==a[i-1][j+1])
			{
				a[i][j]=1;
				jia++;
				if(jia*4>n*(n+1))
	              return ;
			}
			else
			 a[i][j]=0;
		}
		if(jia*4==n*(n+1)){
		   sum++;
// for(i=0;i<n;i++){
//		   for(j=0;j<n-i;j++)
//		   	cout<<a[i][j]<<" ";	   
//		   cout<<endl;
//	}
		}
		return;		
	}
	a[0][time]=1;
   dfs(n,time+1,jia+1);
   a[0][time]=0;
   dfs(n,time+1,jia);
}

