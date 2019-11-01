#include <iostream>
#include <cstdio>
#include <string.h>
using namespace std;
int map[5][5];
bool ok;
int small;
bool check(int mama[5][5]){
	int i,j;
	bool yes=1;
	for(i=0;i<4;i++){
		for(j=1;j<4;j++)
	   if(mama[i][0]!=mama[i][j]){
	   	yes=0;
	   	 break;
	   }
	    if(yes==0)
	    break;    
	}
	if(yes)
	return true;
	 yes=1;
	 for(i=0;i<4;i++){
		for(j=1;j<4;j++)
	   if(mama[0][i]!=mama[j][i]){
	   	yes=0;
	   	 break;
	   }
	    if(yes==0)
	    break;    
	}
	if(yes)
	return true;
	return false;
}
inline void handle(int &x){
	if(x<0)
	  x=3;  		 
	else if(x>=4)
		x=0;		 
}
void dfs(int mama[5][5],int sum){
	int hehe[5][5];
	if(small==0)
	   return;
	if(sum<6&&check(mama))
	  {
	  	ok=1;
	  	if(sum==0){
	  		small=0;
	  		return;
		  }
	  else if(sum-1<small)
	  	small=sum-1;
	  	return;
	  }
	if(sum>5)
	  return;
	for(int i=0;i<4;i++){//hang
		 memcpy(hehe,mama,sizeof(mama));
		 int tmp=hehe[i][0];// zuo
		 hehe[i][0]=hehe[i][1];
		 hehe[i][1]=hehe[i][2];
		 hehe[i][2]=hehe[i][3];
		hehe[i][3]=tmp;
		 dfs(hehe,sum+1);
		 memcpy(hehe,mama,sizeof(mama));
		 tmp=hehe[i][3];   //you
		 hehe[i][3]=hehe[i][2];
		 hehe[i][2]=hehe[i][1];
		 hehe[i][1]=hehe[i][0];
		hehe[i][0]=tmp;
		 dfs(hehe,sum+1);
	}
	for(int i=0;i<4;i++){//lie
		 memcpy(hehe,mama,sizeof(mama));
		 int tmp=hehe[3][i];   //xia
		 hehe[3][i]=hehe[2][i];
		 hehe[2][i]=hehe[1][i];
		 hehe[1][i]=hehe[0][i];
		hehe[0][i]=tmp;
		 dfs(hehe,sum+1);
		 memcpy(hehe,mama,sizeof(mama));
		 tmp=hehe[0][i];   //shang
		 hehe[0][i]=hehe[1][i];
		 hehe[1][i]=hehe[2][i];
		 hehe[2][i]=hehe[3][i];
		hehe[3][i]=tmp;
		 dfs(hehe,sum+1);
	}
}
int main(){
	int t,i,j;
	cin>>t;
	while(t--){
		ok=0;
		small=999;
		for(i=0;i<4;i++)
		  for(j=0;j<4;j++)
		   scanf("%d",&map[i][j]);	  	
		  	dfs(map,0);				 		  	
		if(ok)
		printf("%d\n",small);
		else
		 	printf("nandeyibi\n");
	}
	return 0;
}
/*
#include <iostream>
#include <cstdio>
#include <string.h>
using namespace std;
int map[5][5];
bool ok;
int small;
//bool book[5][5];
int next[4][2]={{0,1},{1,0},{-1,0},{0,-1}};
bool check(int mama[5][5]){
	int i,j;
	bool yes=1;
	for(i=0;i<4;i++){
		for(j=1;j<4;j++)
	   if(mama[i][0]!=mama[i][j]){
	   	yes=0;
	   	 break;
	   }
	    if(yes==0)
	    break;    
	}
	if(yes)
	return true;
	 yes=1;
	 for(i=0;i<4;i++){
		for(j=1;j<4;j++)
	   if(mama[0][i]!=mama[j][i]){
	   	yes=0;
	   	 break;
	   }
	    if(yes==0)
	    break;    
	}
	if(yes)
	return true;
	return false;
}
inline void handle(int &x){
	if(x<0)
	  x=3;  		 
	else if(x>=4)
		x=0;		 
}
inline void dfs(int mama[5][5],int x,int y,int sum){
	int hehe[5][5];
	memcpy(hehe,mama,sizeof(mama));
	if(small==0)
	   return;
	if(sum<6&&check(mama))
	  {
	  	ok=1;
	  	if(sum<small)
	  	small=sum;
	  	return;
	  }
	if(sum>5)
	  return;
	for(int i=0;i<4;i++){
		 int a=x+next[i][0];
		 int b=y+next[i][1];
		 int tmp;
	    handle(a);
	    handle(b);
		tmp=hehe[x][y];
		hehe[x][y]=hehe[a][b];
		hehe[a][b]=tmp;
		dfs(hehe,a,b,sum+1);
	}
}
int main(){
	int t,i,j;
	cin>>t;
	while(t--){
		ok=0;
		small=999;
		for(i=0;i<4;i++)
		  for(j=0;j<4;j++)
		   scanf("%d",&map[i][j]);
		   
		   for(i=0;i<4;i++)
		  for(j=0;j<4;j++){
		  	//memset(book,0,sizeof(book));
		  		dfs(map,i,j,0);	  
		  }
	
		if(ok)
		printf("%d\n",small);
		else
		 	printf("nandeyibi\n");
	}
	return 0;
}
*/
