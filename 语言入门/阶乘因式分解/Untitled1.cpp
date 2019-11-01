#include "iostream"
using namespace std;
int main(){
	int n,i,j,a,b;
	cin>>n;
    for(i=0;i<n;i++){
    	int sum=0;
    	cin>>a>>b;
        for(j=2;j<=a;j++){
        	int temp=j;
        	while(temp%b==0){
        		temp/=b;
        		sum++;
        	}
        }
    	cout<<sum<<endl;
    }
	return 0; 
}

