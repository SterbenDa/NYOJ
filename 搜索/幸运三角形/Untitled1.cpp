/*
#include"iostream"
  #include<cstring>
  #include<stdio.h>
  #include<time.h>
  using namespace std;
  typedef unsigned char uchar;
  
  //char cc[2]={'+','-'};    //便于输出
  int n,                     //第一行符号总数
     half,                 //全部符号总数一半
    counter;             //1计数，即  '-' 号计数
    
 char **p;                //符号存储空间    
 long sum;                //符合条件的三角形计数

 //t，第一行第 t个符号
 void Backtrace(int t)
 {
    int i, j;
     
    if( t > n )
       sum++;
     else
     {
        for(i=0; i<2; ++i)  //只取  0('+')  或者  1('-')
        {
            p[1][t] = i;   //第一行第 t个符号
             counter += i;        //'-'号统计
            for(j=2; j<=t; ++j)    //当第一行符号 >=2时，可以运算出下面行的某些符号（第一行有几个数就可以相应往下计算几行，每次计算过的就不用重复计算） 
            {
                p[j][t-j+1] = p[j-1][t-j+1]^p[j-1][t-j+2];//通过异或运算下行符号
                counter += p[j][t-j+1];                        
             }
            if( (counter <= half) && ( t*(t+1)/2 - counter <= half) )//若符号统计未超过半数，并且另一种符号也未超过半数
                 Backtrace(t+1);            //在第一行增加下一个符号    
             //回溯，判断另一种符号情况
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
         
         if( half%2 == 0 )//总数须为偶数，若为奇数则无解
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

