#include "cstdio"
#include "queue"
using namespace std;
struct Now{
	int x,y,step;
	bool sf,pig;
};
int n,m;
char map[105][105];
int main(){	
    char c[105]; 
   bool check_pig(int x,int y);
   bool check_sf(int x,int y);
	int next[4][2]={{-1,0},{0,1},{1,0},{0,-1}};
	Now now;
	queue<Now> q;
	int t,i,j;
	bool book[105][105];
	int num=0;
	while(scanf("%d%d%d",&n,&m,&t)==3){
		bool ok=0;
		num++;
		for(i=0;i<n;i++){
			scanf("%s",c);
		for(j=0;j<m;j++){
		   map[i][j]=c[j];
		   book[i][j]=0;
		   if(c[j]=='S')
		   {
		   	now.x=i;
		   	now.y=j;
		   	now.step=0;
		   	book[i][j]=1;
		   }
	}
}
         printf("Case %d:\n",num);
		    if(check_pig(now.x,now.y)&&check_sf(now.x,now.y)){
		   		printf("0\n");
		   		continue;
		   	}
		   	now.sf=check_sf(now.x,now.y);
		   	now.pig=check_pig(now.x,now.y);
   	     q.push(now);   	
 	  while(!q.empty()){
	  	  Now tmp=q.front();
	  	  for(i=0;i<4;i++){
	  	  	 int a=tmp.x+next[i][0];
	  	  	  int b=tmp.y+next[i][1];
	  	  	  if(a<0||a>=n||b<0||b>=m||map[a][b]=='X'||book[a][b]==1||map[a][b]=='E'
				  ||map[a][b]=='D')
	  	  	  continue;
	  	  	  book[a][b]=1;
	  	  	  now.x=a;
	  	  	  now.y=b;
	  	  	  now.step=tmp.step+1;
	  	  	  if(now.step>t)
	  	  	  continue;
	  	  	  bool p=check_pig(a,b);
	  	  	  bool s=check_sf(a,b);
	  	  	  if(tmp.pig)
	  	  	  if(s){
	  	  	  	ok=1;
	  	  	  	break;
	  	  	  }
	  	  	  if(tmp.sf)
				  if(p){
	  	  	  	ok=1;
	  	  	  	break;
	  	  }
				 if(p&&s){
			 	ok=1;
	  	  	  	break;
			 }
			 now.pig=tmp.pig||p;
			 now.sf=tmp.sf||s;
			 q.push(now);
	  	  }
	  	  if(ok)
	  	  break;
	  	  book[tmp.x][tmp.y]=0;
	  	  q.pop();	  	   
	  }
	  
		if(ok)
		  printf("%d\n",now.step);
		else
		 printf("-1\n");
		 while(!q.empty()) q.pop();
	}
	return 0;
}
	  
bool check_sf(int x,int y){
	int i;
	for(i=x;i>=0;i--)
	{
		if(map[i][y]=='X'||map[i][y]=='E')
		break;
	    if(map[i][y]=='D')
	   return true;	 
}
	
	for(i=x;i<n;i++)
	{
		if(map[i][y]=='X'||map[i][y]=='E')
	    	break;   
	    if(map[i][y]=='D')
	   return true;
	}
	
	for(i=y;i<m;i++)
	{
		if(map[x][i]=='X'||map[x][i]=='E')
	    	break;
	   if(map[x][i]=='D')
	   return true;
	}
		      
	for(i=y;i>=0;i--)
	{
		if(map[x][i]=='X'||map[x][i]=='E')
	    	break;
	   if(map[x][i]=='D')
	   return true;
	}
	return false;
}	  
	  
	  	  
bool check_pig(int x,int y){
	int i;
	for(i=x;i>=0;i--)
	{
		if(map[i][y]=='X'||map[i][y]=='D')
		break;
	    if(map[i][y]=='E')
        return true;	 
}
	
	for(i=x;i<n;i++)
	{
		if(map[i][y]=='X'||map[i][y]=='D')
	    	break;   
	    if(map[i][y]=='E')
	      return true;
	}
	
	for(i=y;i<m;i++)
	{
		if(map[x][i]=='X'||map[x][i]=='D')
	    	break;
	    if(map[x][i]=='E')
           return true;
	}
		      
	for(i=y;i>=0;i--)
	{
		if(map[x][i]=='X'||map[x][i]=='D')
	    	break;
	    if(map[x][i]=='E')
	    return true;
	}
	return false;
}


/*
#include "cstdio"
#include "queue"
using namespace std;
struct Now{
	int x,y,step;
	bool sf,pig;
};
int n,m;
char map[105][105];
int main(){	
   int check(int x,int y);
	int next[4][2]={{-1,0},{0,1},{1,0},{0,-1}};
	Now now;
	queue<Now> q;
	int t,i,j;
	bool book[105][105];
	int num=0;
	while(scanf("%d%d%d",&n,&m,&t)==3){
		bool ok=0;
		num++;
		printf("Case %d:\n",num);
		for(i=0;i<n;i++){
			scanf("%s",c);
		for(j=0;j<m;j++){
		   map[i][j]=c[j];
		   book[i][j]=0;
		   if(c[j]=='S')
		   {
		   	now.x=i;
		   	now.y=j;
		   	now.step=0;
		   	book[i][j]=1;
		   }
	}
	}
	 int hehe=check(now.x,now.y);
		   	if(hehe==0){
		   		now.sf=0;
		   		now.pig=0;
		   	}
		   	else if(hehe==3){
		   		printf("0\n");
		   		continue;
		   	}
		   	else if(hehe==2){
		   		now.sf=1;
		   		now.pig=0;
		   	}
		   	else if(hehe==1){
		   		now.sf=0;
		   		now.pig=1;
		   	}
   	q.push(now);   	
 	  while(!q.empty()){
	  	  Now tmp=q.front();
	  	  for(i=0;i<4;i++){
	  	  	 int a=tmp.x+next[i][0];
	  	  	  int b=tmp.y+next[i][1];
	  	  	  if(a<0||a>=n||b<0||b>=m||map[a][b]=='X'||book[a][b]==1)
	  	  	  continue;
	  	  	  book[a][b]=1;
	  	  	  now.x=a;
	  	  	  now.y=b;
	  	  	  now.step=tmp.step+1;
	  	  	  int hehe=check(a,b);
	  	  	  if(hehe==3){
	  	  	  	ok=1;
	  	  	  	break;
	  	  	  }
	  	  	  else if(hehe==2){
				 now.
			}
			 else if(hehe==1){
			 	
			 }
	  	  }
	  	  if(ok)
	  	  break;
	  	  book[tmp.x][tmp.y]=0;
	  	   q.pop();	  	   
	  }
	  
		if(ok)
		  printf("%d\n",now.step);
		else
		 printf("-1\n");
		 while(!q.empty()) q.pop();
	}
	return 0;
}
int check(int x,int y){
	int pig=0,sf=0;
	int i;
	for(i=x;i>=0;i--)
	{
		if(map[i][y]=='X')
		break;
	    if(map[i][y]=='D'){
	      sf=2;	
		  break;
	  }
	    if(map[i][y]=='E'){
	     pig=1;
	     break;
	 }
	}
	
	for(i=x;i<n;i++)
	{
		if(map[i][y]=='X')
	    	break;
	    if(map[i][y]=='D'){
	      sf=2;	
		  break;
	  }
	    if(map[i][y]=='E'){
	     pig=1;
	     break;
	 }	
	}
	
	 if(sf+pig!=3)	     
	for(i=y;i<m;i++)
	{
		if(map[x][i]=='X')
	    	break;
	    if(map[x][i]=='D'){
	      sf=2;	
		  break;
	  }
	    if(map[x][i]=='E'){
	     pig=1;
	     break;
	 }
	}
		     
	 if(sf+pig!=3)	     
	for(i=y;i>=0;i--)
	{
		if(map[x][i]=='X')
	    	break;
	    if(map[x][i]=='D'){
	      sf=2;	
		  break;
	  }
	    if(map[x][i]=='E'){
	     pig=1;
	     break;
	 }
	}
	
	return pig+sf;
}
*/
