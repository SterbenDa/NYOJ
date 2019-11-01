#include "iostream"
#include "map"
using namespace std;
int a[110];
map<int,int> ma;
int main(){
	int n,m,i;
	cin>>n;
	while(n--){
		int zs=0,cs=-1;
			cin>>m;
		for(i=0;i<m;i++){
			cin>>a[i];				
			ma[a[i]]++;			
			if(ma[a[i]]>cs){
				zs=a[i];
				cs=ma[a[i]];
			}
		}
	  cout<<zs<<" "<<cs<<endl;	
		ma.clear();
	}
	return 0;
}
