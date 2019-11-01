#include "iostream"
using namespace std;
int main(){
	int n,i,m,x,y;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>m;
		for(x=1;x<=m;x++){
			for(y=x;y<10;y++)
			{
				cout<<x<<"*"<<y<<"="<<x*y<<" ";
			}
			cout<<endl;
		}
	}
	return 0;
}
