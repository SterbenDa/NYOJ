#include "stdio.h"
#include "iostream"
using namespace std;
int main(){
    int i,n;
    char c;
    cin>>n;
    c=getchar();
    for(i=0;i<n;i++){
    	string s="";
    	c=getchar();
    	while(c!='\n'){
    		if((c>='a'&&c<='z')||(c>='A'&&c<='Z')){
    		 s=c+s; 
    	}
    		 c=getchar();
    	}
    cout<<s;
    	cout<<endl;
    }
	return 0;
}




