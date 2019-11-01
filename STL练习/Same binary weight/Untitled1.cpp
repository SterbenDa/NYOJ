#include "iostream"
#include "bitset"
using namespace std;
int main(){
	int n,num,i,head;
	while(cin>>n){
		int tmp=0;
	bitset<32> bit(n);
	   num=bit.count();
	   for(i=31;i>=0;i--)
	     if(bit[i]==1){
	     	head=i;
	     	break;
	     }
	   for(i=0;i<31;i++){
	     if(i<=head&&bit[i]==1&&bit[i+1]==0)
	     {
	         bit[i]=0;
			 bit[i+1]=1;
	     	int left=i-1,right=0;
	     	while(left>right){
	     	  while(bit[left]==0&&left>right) left--;
	     	  while(bit[right]==1&&left>right) right++;
	     	  if(left>right){
	     	  	 bit[left]=0;
	     	  	 bit[right]=1;
	     	  }
	     	}
	     	break;
	     }	     	
	     }
	   cout<<bit.to_ulong()<<endl;
	}
	return 0;
}




/*超时 因为100000000000000000000的话for要判断好多次 
#include "iostream"
#include "bitset"
using namespace std;
int main(){
	int n,num,i;
	while(cin>>n){
	bitset<32> bit(n);
	   num=bit.count();
	   for(i=n+1;;i++){
	   	bitset<32> bit(i);
	   	if(bit.count()==num)
	   	{
	   		cout<<i<<endl;
	   		break;
	   	}
	   }
	}
	return 0;
}
*/
