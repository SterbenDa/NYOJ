#include "iostream"
using namespace std;
int main(){
	int n,i,h;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>h;
		if(h<=10) cout<<1<<endl;
		else{
			if(h%5==0)
			 cout<<h/5-1<<endl;
			 else
			 cout<<h/5<<endl;
		}
	}
	return 0;
}
