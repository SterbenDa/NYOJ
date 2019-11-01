#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;
const int N=500+1;
const int M=5000+1;
const int INF=99999999;
struct Node{
	int start,end,speed;
}edge[M];
int pre[N];
bool cmp(Node x,Node y){
	return x.speed<y.speed;
}
inline void Init(int n);
inline void join(int x,int y);
inline int find(int x);
int main(){
	int gcd(int a,int b);
	bool ok;
	int t,i,x,y,j,big,small,fenzi,fenmu,n,m;
	scanf("%d",&t);
	while(t--){
		fenzi=INF;
		fenmu=1;
		scanf("%d%d",&n,&m);
		for(i=0;i<m;i++)
			scanf("%d%d%d",&edge[i].start,&edge[i].end,&edge[i].speed);
		scanf("%d%d",&x,&y);
		sort(edge,edge+m,cmp);
		for(i=0;i<m;i++){
			ok=0;
			Init(n);
			small=edge[i].speed;
			for(j=i;j<m;j++){
				join(edge[j].start,edge[j].end);
				big=edge[j].speed;
				if(find(x)==find(y)){
					ok=1;
					break;
				}
			}
			if(ok){
				if((double)big/(double)small<(double)fenzi/(double)fenmu){
					fenzi=big;
					fenmu=small;
				}
			}
		}
		if(fenzi!=INF){
			if(fenzi%fenmu==0)
				printf("%d\n",fenzi/fenmu);
			else{
				int re=gcd(fenzi,fenmu);
					printf("%d/%d\n",fenzi/re,fenmu/re);
			}
			
		}
	else
		  printf("IMPOSSIBLE\n");
	}
	return 0;
}
inline void Init(int n){
	for(int i=1;i<=n;i++)
	pre[i]=i;
}
inline void join(int x,int y){
	int fx=find(x);
	int fy=find(y);
	if(fx!=fy)
	pre[fx]=fy;
}
inline int find(int x){
      int r=x;
	  while(pre[r]!=r)
	    r=pre[r];
		int i=x,j;
		while(i!=r){
			j=pre[i];
			pre[i]=r;
			i=j;	
	}
	return r;
}
int gcd(int a,int b){
	if(b==0)
	return a;
	else return gcd(b,a%b);
}



