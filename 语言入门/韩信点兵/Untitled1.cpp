#include "iostream"
using namespace std;
int main(){
	int i,a,b,c;
	cin>>a>>b>>c;
	for(i=10;i<=100;i++){
		if(i%3==a&&i%5==b&&i%7==c){
		cout<<i;
	   break;	
	}
	}
	if(i>100)
	cout<<"No answer";
	return 0;
}
