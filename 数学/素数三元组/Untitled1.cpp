#include "stdio.h"
int main(){
	int n;
	while(scanf("%d",&n)==1){
        if(n<7)
  	printf("No triple\n");
		else
	printf("3 5 7\n");
	}
	return 0;
}




/*
#include "iostream"
#define M 5000001
using namespace std;
 bool a[M];
int main(){
	int n,i;
	for(i=2;i<M;i++){
		a[i]=1;
	}
	for(i=3;i<M;i++){
		if(a[i]==1){
		int temp=i+i;		
		while(temp<M){
			a[temp]=0;
			temp+=i;
		}
	}	
	}
	while(cin>>n){
		bool ok=0;
		for(i=3;i+4<=n;i+=2)
			if(a[i]==1&&a[i+2]==1&&a[i+4]==1)
			{
				ok=1;
			cout<<i<<" "<<i+2<<" "<<i+4<<endl;
		}
		if(ok==0)
		cout<<"No triple"<<endl;
	}
	return 0;
}
*/
