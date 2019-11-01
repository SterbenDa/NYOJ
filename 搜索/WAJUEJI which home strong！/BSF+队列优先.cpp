/*分析：这是一道简单的BFS+优先队列问题，还是第一次接触优先队列写进BFS里面，
代码很快就写出来了。可是一直出现wrong，
原因是我把最后的控制条件写错了，让学长改了好长时间才过去，代码如下：*/

#include<iostream>
#include<stdio.h>
#include<string.h>
#include<queue>
using namespace std;
int dx[]={1,0,0,-1};
int dy[]={0,1,-1,0};
char mp[200][200];
int vis[200][200];
int t,n,m;
struct dot
{
    int x,y;
    int time;
    friend bool operator<(dot a,dot b)                //优先对列的定义
    {
        return a.time>b.time;
    }
};
inline bool in(dot gx)
{
    if(gx.x>=0&&gx.x<n&&gx.y>=0&&gx.y<m)
        return true;
    return false;
}

int main()
{
    cin>>t;
    while(t--)
    {
        dot gx;
        cin>>n>>m;
         memset(vis,0,sizeof(vis));
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
               {
                   cin>>mp[i][j];
                   if(mp[i][j]=='s')
                   {
                       gx.x=i;
                       gx.y=j;
                       gx.time=0;
                   }

               }
              vis[gx.x][gx.y]=1;
               priority_queue<dot>q;
               
         while(!q.empty())
                 q.pop();
                 
                 q.push(gx);
                 int step=0;
                 while(!q.empty())
                 {
                    dot tmp,next;
                    tmp=q.top();
					q.pop();
                    for(int i=0;i<4;i++)
                    {
                        next.x=tmp.x+dx[i];
                        next.y=tmp.y+dy[i];
                        next.time=tmp.time+mp[next.x][next.y]-'A'+1;
                        if(mp[next.x][next.y]=='l')
                        {
                            step=tmp.time;                                    //改了很多次才发现的错误
                            break;
                        }
                        if(in(next)&&mp[next.x][next.y]!='#'&&!vis[next.x][next.y])
                        {
                            vis[next.x][next.y]=1;
                            q.push(next);

                        }


                    }
                    if(step>0)
                        break;

                 }
                 if(step>0)
                    printf("%d\n",step);
                else
                    printf("-1\n") ;

    }
    return 0;

}








/*
#include <stdio.h>
#include <string.h>
#include <queue>

#define maxn 105

int n, m;
char G[maxn][maxn];
bool vis[maxn][maxn];
const int mov[][2] = {1, 0, -1, 0, 0, 1, 0, -1};
struct Node {
	int x, y, w;
	friend bool operator<(Node a, Node b) {
		return a.w > b.w;
	}
} s;

void getMap() {
	int i, j;
	char *p;
	for(i = 0; i < n; ++i) {
		scanf("%s", G[i]);
		if(p = strchr(G[i], 's')) {
			s.x = i; s.y = p - G[i];
		}
	}
	s.w = 0;
}

int BFS() {
	std::priority_queue<Node> Q;
	Q.push(s);
	Node u, v;
	int x, y, i;

	memset(vis, 0, sizeof(vis));
	vis[s.x][s.y] = 1;

	while(!Q.empty()) {
		u = Q.top(); Q.pop();
		for(i = 0; i < 4; ++i) {
			x = u.x + mov[i][0];
			y = u.y + mov[i][1];
			if(x >= 0 && x < n && y >= 0 && y < m && G[x][y] != '#' && !vis[x][y]) {
				v = u;
				v.x = x;
				v.y = y;

				if(G[x][y] == 'l')
					return v.w;
				v.w += G[x][y] - 'A' + 1;
				vis[x][y] = 1;
				Q.push(v);
			}
		}
	}

	return -1;
}

int main() {
	// freopen("stdin.txt", "r", stdin);
	int t;
	scanf("%d", &t);
	while(t--) {
		scanf("%d%d", &n, &m);
		getMap();
		printf("%d\n", BFS());
	}
	return 0;
}         
*/
