#include <iostream>
#include <cstdio>
#include <queue>
#include <string.h>
const int N=105;
using namespace std;
int V1,V2,V3;
int re1,re2,re3;
struct Now{
	int a,b,c,step;
}now,tmp;
queue<Now> q;
bool book[N][N][N];
int main(){
	int t,i,j,k;
	scanf("%d",&t);
	while(t--){
		while(!q.empty())  q.pop();
		scanf("%d%d%d",&V1,&V2,&V3);
		scanf("%d%d%d",&re1,&re2,&re3);
		for(i=0;i<=V1;i++)
		for(j=0;j<=V2;j++)
		for(k=0;k<=V3;k++)
		 book[i][j][k]=0;
		 now.a=V1;
		 now.b=0;
		 now.c=0;
		 now.step=0;
		 q.push(now);
		 book[V1][V2][V3]=1;
		 bool ok=0;
		 while(!q.empty()){
		 	now=q.front();
		 	if(now.a==re1&&now.b==re2&&now.c==re3){
		 		ok=1;
		 		break;
			 }	    	
		 	q.pop();
		 	//a->b
		 	if(now.b<V2){  //BÃ»Âú 
		 		if(now.a>=(V2-now.b)){
		 			 i=now.a-(V2-now.b);
		 			  j=V2;
				 }
		 		else{
		 			i=0;
		 			j=now.b+now.a;
				 }			  			  
			   k=now.c;
			   if(book[i][j][k]!=1){
			   	book[i][j][k]=1;
			   	tmp.a=i;
			   	tmp.b=j;
			   	tmp.c=k;
			   	tmp.step=now.step+1;
			    q.push(tmp);
			   }
		 }
		//a->c 
		 if(now.c<V3){
		 		if(now.a>=(V3-now.c)){
		 			 i=now.a-(V3-now.c);
		 			  k=V3;
				 }
		 		else{
		 			i=0;
		 			k=now.a+now.c;
				 }			  			  
			   j=now.b;
			   if(book[i][j][k]!=1){
			   	book[i][j][k]=1;
			   	tmp.a=i;
			   	tmp.b=j;
			   	tmp.c=k;
			   	tmp.step=now.step+1;
			    q.push(tmp);
			   }
		 } 
		 //b->a
		 if(now.a<V1){
		 		if(now.b>=(V1-now.a)){
		 			 j=now.b-(V1-now.a);
		 			  i=V1;
				 }
		 		else{
		 			j=0;
		 			i=now.b+now.a;
				 }			  			  
			   k=now.c;
			   if(book[i][j][k]!=1){
			   	book[i][j][k]=1;
			   	tmp.a=i;
			   	tmp.b=j;
			   	tmp.c=k;
			   	tmp.step=now.step+1;
			    q.push(tmp);
			   }
		 }
		 //b->c
		 if(now.c<V3){
		 		if(now.b>=(V3-now.c)){
		 			 j=now.b-(V3-now.c);
		 			  k=V3;
				 }
		 		else{
		 			j=0;
		 			k=now.b+now.c;
				 }			  			  
			   i=now.a;
			   if(book[i][j][k]!=1){
			   	book[i][j][k]=1;
			   	tmp.a=i;
			   	tmp.b=j;
			   	tmp.c=k;
			   	tmp.step=now.step+1;
			    q.push(tmp);
			   }
		 }
		 //c->a
		 if(now.a<V1){
		 		if(now.c>=(V1-now.a)){
		 			 k=now.c-(V1-now.a);
		 			  i=V1;
				 }
		 		else{
		 			k=0;
		 			i=now.c+now.a;
				 }			  			  
			   j=now.b;
			   if(book[i][j][k]!=1){
			   	book[i][j][k]=1;
			   	tmp.a=i;
			   	tmp.b=j;
			   	tmp.c=k;
			   	tmp.step=now.step+1;
			    q.push(tmp);
			   }
		 }
		 //c->b
		 if(now.b<V2){
		 		if(now.c>=(V2-now.b)){
		 			 k=now.c-(V2-now.b);
		 			  j=V2;
				 }
		 		else{
		 			k=0;
		 			j=now.b+now.c;
				 }			  			  
			   i=now.a;
			   if(book[i][j][k]!=1){
			   	book[i][j][k]=1;
			   	tmp.a=i;
			   	tmp.b=j;
			   	tmp.c=k;
			   	tmp.step=now.step+1;
			    q.push(tmp);
			   }
		 }
	}
		 if(ok)
		   printf("%d\n",now.step);
		   else
		    printf("-1\n");
	}
	return 0;
}
