#include "iostream"
using namespace std;
int main(){
   int n,i,big,j,k; 
   int a[3];
   while(cin>>n){
   	big=-99999999;
   	int num=1;
   	for(i=1;i<=n/3;i++){
   	cin>>a[0]>>a[1]>>a[2];
   	if(num%2==1){
   		for(j=0;j<2;j++)
   		for(k=j+1;k<3;k++){
   			if(a[j]<a[k]){
   				int temp=a[j];
   				a[j]=a[k];
   				a[k]=temp;
   			}
   		}
   		if(big<a[0])
   	   big=a[0];
   	}
	else{
   		for(j=0;j<2;j++)
   		for(k=j+1;k<3;k++){
   			if(a[j]<a[k]){
   				int temp=a[j];
   				a[j]=a[k];
   				a[k]=temp;
   			}
   		}
   		if(big<a[2])
   	   big=a[2];
   	}
   	num++;
   }
   cout<<big<<endl;
 }
	return 0;
}
