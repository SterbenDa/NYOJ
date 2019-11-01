#include "iostream"
using namespace std;
int main(){
	bool book[100];
    int sum[100],i,a,b,sort[100];
    for(i=1;i<100;i++){
    sum[i]=0;
     book[i]=0;   
}
 int num=0;
    while(cin>>a>>b){
    	if(a==0&&b==0)
     	break;
        if(book[a]==0){
        	book[a]=1;
        	sort[num++]=a;
        }	
    	sum[a]+=b;
    }
    for(i=0;i<num;i++){
       cout<<sort[i]<<" "<<sum[sort[i]]<<endl;
   }
	return 0;	
}
