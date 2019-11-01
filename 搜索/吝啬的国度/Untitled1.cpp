#include "iostream"
#include "queue"
#include "vector"
#define N 100001 
using namespace std;
struct Node{
	int to;
};
int main(){
	int dis[N];
	vector<Node> ve[N];
	queue<int> q;
	Node node;
	int m;
	int i,s,start,end,n;
	cin>>m;
	bool book[N];
	while(m--){
		cin>>n>>s;
		for(i=1;i<=n;i++){
		  ve[i].clear();
	   book[i]=0;	  
	}
		for(i=1;i<n;i++){
			cin>>start>>end;
		    	node.to=end;
			 ve[start].push_back(node);
	         node.to=start;
			 ve[end].push_back(node); 
		}
		dis[s]=-1;
		book[s]=1;
		q.push(s);
		while(!q.empty()){
			int tmp=q.front();
			q.pop();
			for(i=0;i<ve[tmp].size();i++){
				if(book[ve[tmp][i].to]==0){
				  dis[ve[tmp][i].to]=tmp;
				  q.push(ve[tmp][i].to);
				  book[ve[tmp][i].to]=1;
			}
		}
		}
		for(i=1;i<=n;i++)
		cout<<dis[i]<<" ";
		cout<<endl;
	}
	return 0;
}
