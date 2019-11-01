#include "iostream"
using namespace std;
int main(){
	int n,m,i;
	while(cin>>n>>m){
		int fenzi=1,fenmu=1;
		for(i=n;i>=n-m+1;i--)
		 fenzi*=i;
		for(i=m;i>=2;i--)
		 fenmu*=i;
		 cout<<fenzi/fenmu<<endl;
	}
	return 0;
}
