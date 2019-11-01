#include "iostream"
#include "queue"
using namespace std;
struct map{
	int x,y;
	int step;
};
int main(){
	int a[9][9]={
 1,1,1,1,1,1,1,1,1,
 1,0,0,1,0,0,1,0,1,
 1,0,0,1,1,0,0,0,1,
 1,0,1,0,1,1,0,1,1,
 1,0,0,0,0,1,0,0,1,
 1,1,0,1,0,1,0,0,1,
 1,1,0,1,0,1,0,0,1,
 1,1,0,1,0,0,0,0,1,
 1,1,1,1,1,1,1,1,1};
 bool book[9][9];
	int next[4][2]={{-1,0},{0,1},{1,0},{0,-1}};
	int n,i,j;
	int bx,by,ex,ey;
	cin>>n;
	while(n--){
		map mm;
		cin>>bx>>by>>ex>>ey;
		if(bx==ex&&by==ey)
		{
			cout<<0<<endl;
			continue;
		}
		for(i=0;i<=8;i++)
		for(j=0;j<=8;j++)
		book[i][j]=0;
		book[bx][by]=1;
		mm.x=bx;
		mm.y=by;
		mm.step=0;
		queue<map> q;
		q.push(mm);
		bool ok=0;
		while(!q.empty()){
			map tmp=q.front();
			q.pop();
			for(i=0;i<4;i++){
				int ax=tmp.x+next[i][0];
				int ay=tmp.y+next[i][1];
				if(ax<0||ax>=9||ay<0||ay>=9||a[ax][ay]==1||book[ax][ay]==1)
				continue;
				if(ax==ex&&ay==ey)
				{
					ok=1;
					break;
				}
				book[ax][ay]=1;
				map nex;
				nex.x=ax;
				nex.y=ay;
				nex.step=tmp.step+1;
				q.push(nex);
			}
			if(ok){
				cout<<tmp.step+1<<endl;
				break;
			}
		}
	}
	return 0;
}
      
    /*     5
      7  1   6
      4  A  2  8
        3    9*/

