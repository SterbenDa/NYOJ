#include "iostream"
using namespace std;
int main(){
	int i,a,small=10001,big=-1;
	for(i=0;i<5;i++)
	{
		cin>>a;
		if(a<small)  small=a;
		if(a>big)  big=a;
	}
	cout<<small<<" "<<big;
	return 0;
}






