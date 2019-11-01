#include "iostream"
using namespace std;
int main(){
   int i,a,b,temp;
    bool book[3];
    int now=1;
   while(cin>>a>>b){
        int sum=0,angry=0;
	 for(i=a;i<=b;i++){
	 	//angry 
	 	int flag=0;
	 	book[0]=0;   //5
        book[1]=0;    //2
        book[2]=0;    //1
        temp=i;
		 while(temp!=0){
		 	if(temp%10==5){
		 	  book[0]=1;
		 	   if(flag==2)
			  {
			  	angry++;
			  	flag=0;
			  }	 
			  else
			    flag=0; 
		 }
		 	else if(temp%10==2){
		 	  book[1]=1;  
		     if(flag==1)
			   flag=2;
			   else
			   flag=0;	  
		 }
		 	else if(temp%10==1){
		 	  book[2]=1;
		 	  flag=1;
		     
		 }
		 	  temp/=10;
		 }
		 if(book[0]==1&&book[1]==1&&book[2]==1)
		 sum++;
	 }  
	 cout<<"Case "<<now<<":"<<sum<<" "<<angry<<endl;	
	 now++;
   }
	return 0;
}      

