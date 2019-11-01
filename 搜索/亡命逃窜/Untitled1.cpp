#include "cstdio"
#include "queue"
using namespace std;
struct Now{
	int x,y,z,time;
};
queue<Now> q;
int main(){
	//上下前后左右 
	//x z y
	int next[6][3]={{0,-1,0},{0,1,0},{-1,0,0},{1,0,0},{0,0,-1},{0,0,1}};
	int n,a,b,c,t,i,j,k;
	bool map[55][55][55];
	Now tmp;
	bool book[55][55][55];
    scanf("%d",&n);
	while(n--){
		scanf("%d%d%d%d",&a,&b,&c,&t);
		for(i=0;i<a;i++)
		for(j=0;j<b;j++)
		for(k=0;k<c;k++){
			scanf("%d",&map[i][j][k]);
			book[i][j][k]=0;
		}
		tmp.x=0;
		tmp.y=0;
		tmp.z=0;
		tmp.time=0;
        book[0][0][0]=1;
		q.push(tmp);
		bool ok=0;
		while(!q.empty()){
			tmp=q.front();
			q.pop();
			for(i=0;i<6;i++){
				//x(a) y(c) z(b)
				int x=tmp.x+next[i][0];
				int y=tmp.y+next[i][2];
				int z=tmp.z+next[i][1];
				if(x<0||x>=a||y<0||y>=c||z<0||z>=b||map[x][z][y]==1||book[x][z][y]==1)
				continue;
				book[x][z][y]=1;
				Now now;
				now.x=x;
				now.y=y;
				now.z=z;
				now.time=tmp.time+1;
				if(now.time>t)
				    continue;
				if(x==a-1&&y==c-1&&z==b-1)
				{
					ok=1;
					break;
				} 
				q.push(now);
			}
			//麻痹 这里少了这句话查错了好久 
			if(ok)  
			break;
		}
		if(ok)
		printf("%d\n",tmp.time+1);
		else
		printf("-1\n");
		while(!q.empty()) q.pop();
	}
	return 0;
}









/*超时 改用c试试 
#include "iostream"
#include "queue"
using namespace std;
struct Now{
	int x,y,z,time;
};
int main(){
	//上下前后左右 
	int next[6][3]={{0,-1,0},{0,1,0},{-1,0,0},{1,0,0},{0,0,-1},{0,0,1}};
	int n,a,b,c,t,i,j,k;
	bool map[55][55][55];
	Now tmp;
	queue<Now> q;
	bool book[55][55][55];
	cin>>n;
	while(n--){
		cin>>a>>b>>c>>t;
		for(i=0;i<a;i++)
		for(j=0;j<b;j++)
		for(k=0;k<c;k++){
			cin>>map[i][j][k];
			book[i][j][k]=0;
		}
		tmp.x=0;
		tmp.y=0;
		tmp.z=0;
		tmp.time=0;
        book[0][0][0]=1;
		q.push(tmp);
		bool ok=0;
		while(!q.empty()){
			tmp=q.front();
			q.pop();
			for(i=0;i<6;i++){
				//x(a) y(c) z(b)
				int x=tmp.x+next[i][0];
				int y=tmp.y+next[i][1];
				int z=tmp.z+next[i][2];
				if(x<0||x>=a||y<0||y>=c||z<0||z>=b||map[x][z][y]==1||book[x][z][y]==1)
				continue;
				if(x==a-1&&y==c-1&&z==b-1)
				{
					ok=1;
					break;
				} 
				book[x][z][y]=1;
				Now now;
				now.x=x;
				now.y=y;
				now.z=z;
				now.time=tmp.time+1;
				if(now.time>=t)
				 break;
				q.push(now);
			}
		}
		if(ok)
		cout<<tmp.time+1<<endl;
		else
		cout<<-1<<endl;
		while(!q.empty()) q.pop();
	}
	return 0;
}*/
