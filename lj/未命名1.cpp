#include <iostream>
using namespace std;
const int M=1000000;
int main(){
	int a[20];
	int t,m,n,num,sum,i,len;
	n=2;
	a[0]=1;
	for(i=1;;i++){
	    a[i]=a[i-1]+n;
		n*=2;
		if(a[i]>M)
		break;
	}
	len=i;
//	for(i=0;i<=len;i++)
  // cout<<a[i]<<endl;
	cin>>t;
	while(t--){
		cin>>m>>n;
	    num=0;sum=0;
	    for(i=0;i<=len;i++){
	    	if(a[i]>m)
	    	  break;
	    }
	    num=i;  //Ïä×Ó 
	    if(num>n){
	    	  cout<<"No"<<endl;
	    	  continue;
	    }
	    if(num==n&&m-a[num-1]!=0){
	    	 cout<<"No"<<endl;
	    	  continue;
	    }
	    if(num<n&&m-a[num-1]>=n-num){
	    	cout<<"Yes"<<endl;
	    	 continue;
	    }
	    else{
	    	cout<<"No"<<endl;
	    	  continue;
	    }
	}
	return 0;
}
