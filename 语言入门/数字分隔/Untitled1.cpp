#include "iostream"
using namespace std;
int main(){
	string s;
	int i,j;
	while(cin>>s){
		int head=-1,dian=-1;
		string result="";
	   for(i=0;s[i]!='\0';i++){
	   	   if(head==-1&&s[i]!='0'&&s[i]!='-')
	   	    head=i;
	   	    if(s[i]=='.'){
	   	    	dian=i;
	   	    	break;
	   	    }
	   }
	   if(dian==-1){
	   	   if(s[0]=='-'){
	   	   	  result=".00)";
	   	   	  for(i=s.length()-1,j=0;i>=head;i--,j++){
	   	   	     if(j%3==0){
	   	   	     	j=0;
	   	   	     	result=','+result;
	   	   	     }
	   	   	       result=s[j]+result;
	   	   	 }
	   	   	 result='('+result;
	   	   	   cout<<result<<endl;
	   	   }
	   	   else{
	   	   	  result=".00";
	   	   	  for(i=s.length()-1,j=0;i>=head;i--,j++){
	   	   	     if(j%3==0){
	   	   	     	j=0;
	   	   	     	result=','+result;
	   	   	     }
	   	   	       result=s[j]+result;
	   	   	 }
	   	   	   cout<<result<<endl;
	   	   }
	   }	
	   else{
	   	if(s[0]=='-'){
	   		if(s.length()-dian<3){
	   	   	   for(i=dian;i<s.length();i++)
	   	   	   result=result+s[i];	   	   	   
	   	   }
	   	   }
	   	   else{
	   	   	 
	   	   }
	   }
	}
	return 0;
}
