#include "iostream"
using namespace std;
int main(){
	int m,n,k,i,j,z;
	int a[51][51],b[51][51],c[51][51];
	while(cin>>m>>n>>k){
		if(m==0&&n==0&&k==0)
		   break;
		for(i=1;i<=m;i++)
		for(j=1;j<=k;j++)
		    c[i][j]=0;
		    
		for(i=1;i<=m;i++)
		for(j=1;j<=n;j++)
		cin>>a[i][j];
		
		for(i=1;i<=n;i++)
		for(j=1;j<=k;j++)
		cin>>b[i][j];
		
		for(i=1;i<=m;i++)
		for(j=1;j<=k;j++)
		for(z=1;z<=n;z++)
		 c[i][j]+=a[i][z]*b[z][j];
		 
		for(i=1;i<=m;i++){
		for(j=1;j<=k;j++)
		 cout<<c[i][j]<<" ";
	      cout<<endl;	 
	}
	}
	return 0;
}
