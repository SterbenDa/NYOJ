#include "iostream"
#include "queue"
using namespace std;
struct cmp{
bool operator()(int &a,int &b){
	return a>b;
}
};
int main(){
	int n,m,i,a,b;
	cin>>n;
	priority_queue<int,vector<int>,cmp>q ;
	while(n--){
		long long sum=0;
		cin>>m;
		for(i=0;i<m;i++){
			cin>>a;
			q.push(a);
		}
		for(i=0;i<m-1;i++){
			a=q.top();
			q.pop();
			b=q.top();
			q.pop();
			q.push(a+b);
			sum+=a+b;
		}
		cout<<sum<<endl;
	  while(!q.empty())  q.pop();
	}
	return 0;
}
