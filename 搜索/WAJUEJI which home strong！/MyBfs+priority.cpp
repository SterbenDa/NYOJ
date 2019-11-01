#include "iostream"
#include "queue"
using namespace std;
struct now{
	int x,y,time;
};
bool operator <(now a,now b){
	return a.time>b.time;
};
int main(){
	int go[4][2]={{-1,0},{0,1},{1,0},{0,-1}};
	int n,m;
	char c[150][150];
	bool book[150][150];
	int i,t,j,k;
	cin>>t;
	for(i=0;i<t;i++){
		cin>>n>>m;
		for(j=0;j<n;j++)
		for(k=0;k<m;k++)
		book[j][k]=0;
		 now start;
		for(j=0;j<n;j++)
			for(k=0;k<m;k++){
		    	cin>>c[j][k];
		   	if(c[j][k]=='s'){
		   		start.x=j;
		  	 	start.y=k;
		   	 	 start.time=0;
		   	}
	}	
		priority_queue<now> q;
		book[start.x][start.y]=1;
		while(!q.empty())  q.pop();
		q.push(start);
		book[start.x][start.y]=1;
		int sum=-1;
		while(!q.empty()){
			now step,next;
			step=q.top();
			q.pop();
			//cout<<step.x<<" "<<step.y<<" "<<step.time<<" "<<c[step.x][step.y]<<endl;
			for(j=0;j<4;j++){
				int a=step.x+go[j][0];
				int b=step.y+go[j][1];
				if(a<0||a>=n||b<0||b>=m||c[a][b]=='#'||book[a][b]==1)
				continue;
				if(c[a][b]=='l')
				{
					sum=step.time;
					break;
				}
				book[a][b]=1;
				next.x=a;
				next.y=b;
				next.time=c[a][b]-'A'+1+step.time;
				q.push(next);
			}
			if(sum>-1)
			break;
		}
		if(sum>-1)
		cout<<sum<<endl;
		else
		cout<<-1<<endl;
	}
	return 0;
}




