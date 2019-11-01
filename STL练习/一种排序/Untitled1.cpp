#include "cstdio"
#include "set"
using namespace std;
struct Node{
	int h,w,id;
	friend bool operator <(Node a,Node b){
	if(a.id==b.id){
		if(a.h==b.h){
	    return a.w<b.w;
		}		
		else
	    return a.h<b.h;
	}
	else
	 return a.id<b.id;	
}
};
int main(){
	set<Node> s;
    Node node;
	int n,m,i,j,h,w,id;
	scanf("%d",&n);
		for(i=0;i<n;i++){
			scanf("%d",&m);
				for(j=0;j<m;j++){
					scanf("%d%d%d",&node.id,&node.h,&node.w);
					if(node.h<node.w)
					{
						int tmp=node.h;
						node.h=node.w;
						node.w=tmp;
					}
					s.insert(node);
				}
			for(set<Node>::iterator it=s.begin();it!=s.end();it++)
			printf("%d %d %d\n",(*it).id,(*it).h,(*it).w);
			s.clear();
		}
	return 0;
}
