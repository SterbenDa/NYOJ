//ÍøÉÏ´ð°¸ 
#include<stdio.h>
int ok[10];
int yi[10];
void f(int n)
{
	
			
				ok[0]=(yi[0]*yi[0]+yi[1]*yi[2])%10000;
			    ok[1]=(yi[0]*yi[1]+yi[1]*yi[3])%10000;
				ok[2]=(yi[2]*yi[0]+yi[3]*yi[2])%10000;
				ok[3]=(yi[2]*yi[1]+yi[3]*yi[3])%10000;
				yi[0]=ok[0];yi[1]=ok[1];yi[2]=ok[2];yi[3]=ok[3];
				if(n%2==1)
				{
					ok[0]=(yi[0]+yi[1])%10000;
					ok[1]=yi[0];
					ok[2]=(yi[2]+yi[3])%10000;
					ok[3]=yi[2];
					yi[0]=ok[0];yi[1]=ok[1];yi[2]=ok[2];yi[3]=ok[3];
				}
				
				
			
}
void fib(int n)
{
    if(n == 1) return;
    fib(n/2);//µÝ¹é
    f(n);
}
int main()
{
	int a,b,n,m;
	while(1)
	{
		scanf("%d",&n);
		ok[0]=yi[0]=1;
		ok[1]=yi[1]=1;
		ok[2]=yi[2]=1;
		ok[3]=yi[3]=0;
		if(n==-1) break;
		else if(n==0) printf("0\n");
		else
		{
		    fib(n);
			printf("%d\n",yi[1]);
		

		}
	}
}  
