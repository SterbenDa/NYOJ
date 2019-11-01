 
#include "iostream"
using namespace std;
int main(){
	int i,n,a[100];
	while(cin>>n){
		if(n==0)
		break;
		int small=99999999,id;
		for(i=0;i<n;i++){
			cin>>a[i];
			if(small>a[i])
			{
				small=a[i];
				id=i;
			}
		}
		if(id==0)
		for(i=0;i<n;i++)
		cout<<a[i]<<" ";
		else{
			int temp=a[0];
			a[0]=a[id];
			a[id]=temp;
			for(i=0;i<n;i++)
		cout<<a[i]<<" ";
		}
		cout<<endl;
		for(i=0;i<n;i++){
			a[i]=0;
		}
	}
	return 0;
}        
