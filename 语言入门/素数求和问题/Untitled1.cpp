#include "iostream"
#include "math.h"
using namespace std;
int main(){
	bool check(int a);
   int n,i,j,num,temp;
   cin>>n;
	for(i=0;i<n;i++){
		int sum=0;
		cin>>num;
		for(j=0;j<num;j++){
		   cin>>temp;
		   if(temp==1)
		   continue;
		   if(check(temp))
		   sum+=temp;
		}
		cout<<sum<<endl;
	}
	return 0;
}      
bool check(int a){
	int i;
	for(i=2;i<=sqrt(a);i++)
	   if(a%i==0)
	   return false;
	return true;
} 
