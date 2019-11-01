
#include "iostream"
using namespace std;
int main(){
	string s1,s2;
	int i=1;
	while(cin>>s1>>s2){
	cout<<"Case "<<i<<": ";
	i++;
	if(s1=="A")
	    	cout<<"UNIQUE";
	else if(s1=="A#")
		   cout<<"Bb "<<s2;
	else if(s1=="Bb")
		   cout<<"A# "<<s2;
	else if(s1=="B")
		  cout<<"UNIQUE";
   else if(s1=="C")
		  cout<<"UNIQUE";	
	else if(s1=="C#")
		   cout<<"Db "<<s2;  
	else if(s1=="Db")
		   cout<<"C# "<<s2; 
	else if(s1=="D")
		  cout<<"UNIQUE";
	else if(s1=="E")
		  cout<<"UNIQUE";
	else if(s1=="F")
		  cout<<"UNIQUE";	   	   
	else if(s1=="G")
		  cout<<"UNIQUE";			  
	else if(s1=="D#")
		   cout<<"Eb "<<s2; 
	else if(s1=="Eb")
		   cout<<"D# "<<s2;    
	else if(s1=="F#")
		   cout<<"Gb "<<s2; 
	else if(s1=="Gb")
		   cout<<"F# "<<s2; 		   
	else if(s1=="Ab")
		   cout<<"G# "<<s2; 
	else if(s1=="G#")
		   cout<<"Ab "<<s2;	      	   	   		  		   
	cout<<endl;
	}
	return 0;
}        

