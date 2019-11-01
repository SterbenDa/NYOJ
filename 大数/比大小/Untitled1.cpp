#include "iostream"
using namespace std;
int main(){
	string a,b;
	int i;
	while(cin>>a>>b){
		if(a=="0"&&b=="0")
		break;
		if(a==b)
		{
			cout<<"a==b"<<endl;
			continue;
		}
		
	 else if(a[0]=='-'&&b[0]!='-'){
		cout<<"a<b"<<endl;
	  continue;	
	}
	
		else if(a[0]!='-'&&b[0]=='-'){
		cout<<"a>b"<<endl;
	  continue;	
	}
	
		else if(a[0]!='-'&&b[0]!='-'){
			if(a.length()>b.length()){
				cout<<"a>b"<<endl;
			  continue;	
			}			
			else if(a.length()==b.length()){
				for(i=0;i<a.length();i++){
				if(a[i]>b[i])
				    {
				    	cout<<"a>b"<<endl;
			 			 break;
				    }
				else if(a[i]==b[i])
				continue;
				else{
					cout<<"a<b"<<endl;
			 		break;
				}
			}			    
			}
			else{
				cout<<"a<b"<<endl;
				continue;
			}
		}
		else if(a[0]=='-'&&b[0]=='-'){
			if(a.length()>b.length()){
				cout<<"a<b"<<endl;
				continue;
			}
			else if(a.length()==b.length()){
				for(i=0;i<a.length();i++){
				if(a[i]>b[i])
				    {
				    	cout<<"a<b"<<endl;
			 			 break;
				    }
				else if(a[i]==b[i])
				continue;
				else{
					cout<<"a>b"<<endl;
			 		break;
				}
			}			    
			}
			else
			{
				cout<<"a>b"<<endl;
				continue;
			}
		}
	}
	return 0;
}







