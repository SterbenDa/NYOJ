
/*Ë¼Î¬»ìÂÒ£¡ 
#include "cstdio"
#include "algorithm"
using namespace std;
int main(){
	int a[10005],tmp,i;
	int dp[10005][2];//0×ó½Å 
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
