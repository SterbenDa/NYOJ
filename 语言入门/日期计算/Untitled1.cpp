#include "iostream"
using namespace std;
int main(){
	bool check(int a);
	int month[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	int n,i,j;
	int y,m,d;
	cin>>n;
	for(i=0;i<n;i++){
		int sum=0;
		cin>>y>>m>>d;
		if(m>2){
		if(check(y)){
			sum+=month[1]+month[2]+1;
			for(j=3;j<m;j++)
		  sum+=month[j];
		  sum+=d;
		}
		else{
			sum+=month[1]+month[2];
			for(j=3;j<m;j++)
		  sum+=month[j];
		  sum+=d;
		}
		}
		else{
		  for(j=1;j<m;j++)
		  sum+=month[j];
		  sum+=d;
		}
		cout<<sum<<endl;
	}
	return 0;
}
bool check(int a){
	if((a%4==0&&a%100!=0)||(a%400==0))
	return true;
	return false;
}
