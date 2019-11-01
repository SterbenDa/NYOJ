#include "iostream"
#include "algorithm"
using namespace std;
int a[9]={1,2,3,4,5,6,7,8,9};
int main(){
	int n,x,i;
	cin>>n;
	while(n--){
		cin>>x;
		do{
			for(i=0;i<x;i++)
		    cout<<a[i];
		    cout<<endl;
		}while((next_permutation(a,a+x)));
	}
	return 0;
}
