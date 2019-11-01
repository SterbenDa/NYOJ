#include <iostream>
#include <cstring>
using namespace std;
int main(){
	int room[200];
    int t,n,a,b,c,i,j;
    cin>>t;
    while(t--){
    	cin>>n;
    	memset(room,0,sizeof(room));
    	for(i=0;i<n;i++){
    		cin>>a>>b>>c;
    		for(j=b;j<b+c;j++)
    		room[j]+=a;
    	}  
		int big=-99999999; 
    	for(i=1;i<200;i++)
    	if(big<room[i])
    	big=room[i];
    	cout<<big<<endl;
    }
	return 0;
}


/*
#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
struct Node{
	int day,begin,end;
};
bool cmp(Node a,Node b){
	return a.begin<b.begin;
}
int main(){
	bool book[10005];
	Node node[10005];
    int t,n,a,b,c,i,j;
    cin>>t;
    while(t--){
    	cin>>n;
    	for(i=0;i<n;i++){
    		cin>>a>>b>>c;
    		node[i].day=a;
    		node[i].begin=b;
    		node[i].end=c+b-1;
    	}
    	memset(book,0,n);
    	sort(node,node+n,cmp);
    	int sum=node[0].day;
    	for(i=0;i<n;i++){
    		if(book[i]==0){
    			int last=node[i].end;
    			int big=node[i].day;   //此时申请的房间数 
    		for(j=i+1;j<n;j++){
    			if(book[j]==0&&node[j].begin>last){
    				book[j]=1;
    			   if(node[j].day>big){
    			   	sum+=node[j].day-big;
    			   	big=node[j].day;
    			   }
    			   last=node[j].end;
    			}
    		}
    	}
    	}
    	cout<<sum<<endl;
    }
	return 0;
}
*/










