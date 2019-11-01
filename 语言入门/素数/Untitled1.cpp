//Âèµ°  2ÊÇËØÊý 

#include "iostream"
#include "math.h"
#define M 1020
using namespace std;
bool book[M];
int main(){
   bool check(int a);
   int n,i,a,left,right;
   book[1]=0;
   book[2]=1;
   for(i=3;i<=M;i++){
   	  if(i%2==0){
   	  book[i]=0;
   	  continue;  
   }
      else{
      if(check(i))
	   book[i]=1;
      else
	  book[i]=0;   
  }
} 
   cin>>n;
	for(i=0;i<n;i++){
		 cin>>a;
		 if(book[a]==1){
		 cout<<a<<" "<<endl;
	   continue;	 
	}
	for(left=a-1,right=a+1;;left--,right++){
	   if(right>=2)
	   if(book[right]==1){
	   	 cout<<right<<" "<<endl;
	    break;	   	
	   }
	   if(left>=2)
	    if(book[left]==1){
	    cout<<left<<" "<<endl;
	    break;
	}  	
}
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
