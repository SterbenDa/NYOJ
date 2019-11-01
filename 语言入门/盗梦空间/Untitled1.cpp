#include "iostream"
using namespace std;
int main(){
	int n,i,a,j,b;
	string s;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>a;
		int step=0,fact=0;
		for(j=0;j<a;j++){
			cin>>s;
			if(s=="IN")
			step++;
			else if(s=="OUT")
			step--;
			else if(s=="STAY")
			{
				cin>>b;
				b*=60;
				int temp=step;
				while(temp-->0){
					b/=20;					
				}
				fact+=b;
			}
		}
		cout<<fact<<endl;
	}
	return 0;
}
