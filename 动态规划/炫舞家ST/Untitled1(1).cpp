/*
思路：dp[i][j][k]：表示第i次踩踏后两脚的位置j,k
先固定一只脚的位置j,第i次踩踏后，状态为dp[i][j][a[i]]或者dp[i][a[i]][j],
其中a[i]表示第i个输入的元素，则有状态方程：
x=dp[i-1][k][j]+cost[k][a[i]]; 是通过k踩过来的，cost[k][a[i]]表示k->a[i]的花费。
y=dp[i-1][j][k]+cost[k][a[i]]; 是通过k踩过来的，cost[k][a[i]]表示k->a[i]的花费。
dp[i][j][a[i]]=dp[i][a[i]][j]=min(x,y)；
答案：ans=min(dp[n][j][a[i]])
*/
#include "cstdio"
#include "algorithm"
const int MAX=99999999;
using namespace std;
int main(){
	int  a[10005],tmp,i,j,l,r,small;
	int dp[10005][5][5];
	 int cost[5][5]={
	  	 1,2,2,2,2,
	  	 0,1,3,4,3,
	  	 0,3,1,3,4,
	  	 0,4,3,1,3,
	  	 0,3,4,3,1
	 };
	while(scanf("%d",&tmp)==1){
		if(tmp==0)
		 break;
		 int num=2;
		 a[1]=tmp;
		 while(scanf("%d",&tmp)==1){
		 	if(tmp==0)
		 	break;
		 	a[num++]=tmp;
		 }
		 for(i=0;i<num;i++)
		 for(l=0;l<5;l++)
		 for(r=0;r<5;r++)
		 dp[i][l][r]=MAX;
		 
		 dp[0][0][0]=0;
		 for(i=1;i<num;i++){
		 for(j=0;j<5;j++)
		 dp[i][j][a[i]]=dp[i][a[i]][j]=
		 min(dp[i-1][j][a[i]]+cost[j][a[i]],dp[i-1][a[i]][j]+cost[j][a[i]]);	 
		 }
		 int small=MAX;
		 for(i=0;i<5;i++)
		 for(j=0;j<5;j++)
		  if(small>dp[num-1][i][j])
		  small=dp[num-1][i][j];
		 printf("%d\n",small);
	}
	return 0;
}





















//不对 
/*
#include "cstdio"
#include "algorithm"
using namespace std;
int main(){
	int  a[10005],tmp,i,j,l,r,small;
	int dp[10005][5][5];
	int step[5];
	while(scanf("%d",&tmp)==1){
		if(tmp==0)
		 break;
		 int num=2;
		 a[1]=tmp;
		 while(scanf("%d",&tmp)==1){
		 	if(tmp==0)
		 	break;
		 	a[num++]=tmp;
		 }
		for(i=0;i<5;i++)
		for(j=0;j<5;j++)
		dp[1][i][j]=99999999;
		
		dp[1][a[1]][0]=(a[1]==0?1:2);
		dp[1][0][a[1]]=(a[1]==0?1:2);
		for(i=2;i<num;i++){
			for(j=0;j<5;j++){
			   if(j==a[i])
			   step[j]=1;
			   else if(j==0&&a[i]!=0)
			   step[j]=2;
			   else if(abs(a[i]-j)==1)
			   step[j]=3;
			   else if(abs(a[i]-j)==2)
			   step[j]=4;
			}		 		
			for(l=0;l<5;l++)
				for(r=0;r<5;r++)
				for(j=0;j<5;j++)						
	dp[i][l][r]=min(dp[i-1][l][a[i]]+step[j],dp[i-1][a[i]][r]+step[j]);			
		}
	   small=99999999;
	   for(i=0;i<5;i++)
	   for(j=0;j<5;j++)
	     if(small>dp[num-1][i][j])
	     small=dp[num-1][i][j];
	     printf("%d\n",small);
	}
	return 0;
}
*/

/*思维混乱！ 
#include "cstdio"
#include "algorithm"
using namespace std;
int main(){
	int a[10005],tmp,i;
	int dp[10005][2];//0左脚 
	int step[2][2];
	while(scanf("%d",&tmp)==1){
		if(tmp==0)
		 break;
		 int num=2;
		 a[1]=tmp;
		 while(scanf("%d",&tmp)==1){
		 	if(tmp==0)
		 	break;
		 	a[num++]=tmp;
		 }
		 dp[0][0]=0;
		 dp[0][1]=0;
		 step[0][0]=0;step[0][1]=0;step[1][0]=0;step[1][1]=0;
		 for(i=1;i<num;i++)
		 {  
		    int now1,now2;
		    if(a[i]==step[1][0])
		      now1=1;
		       else if(a[i]!=0&&step[1][0]==0)
		       now1=2;
		      else if(abs(a[i]-step[1][0])==2)
		      	now1=4;
		       else if(abs(a[i]-step[1][0])==1)
		      	now1=3;
              step[1][0]=a[i];
              
               if(a[i]==step[0][0])
		      now2=1;
		      else if(a[i]!=0&&step[0][0]==0)
		       now2=2;
		      else if(abs(a[i]-step[0][0])==2)
		      	now2=4;
		       else if(abs(a[i]-step[0][0])==1)
		      	now2=3;
              step[0][0]=a[i];
              dp[i][0]=min(dp[i-1][0]+now1,dp[i-1][1]+now2);
              
              
              if(a[i]==step[1][1])
		      now1=1;
		       else if(a[i]!=0&&step[1][1]==0)
		       now1=2;
		      else if(abs(a[i]-step[1][1])==2)
		      	now1=4;
		       else if(abs(a[i]-step[1][1])==1)
		      	now1=3;
              step[1][1]=a[i];
              
               if(a[i]==step[0][1])
		      now2=1;
		       else if(a[i]!=0&&step[0][1]==0)
		       now2=2;
		      else if(abs(a[i]-step[0][1])==2)
		      	now2=4;
		       else if(abs(a[i]-step[0][1])==1)
		      	now2=3;
              step[0][1]=a[i];
              dp[i][1]=min(dp[i-1][0]+now1,dp[i-1][1]+now2);
		 }
	printf("%d\n",min(dp[num-1][0],dp[num-1][1]));
	}
	return 0;
}*/
