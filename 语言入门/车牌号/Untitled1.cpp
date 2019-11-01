#include "iostream"
using namespace std;
int main(){
	string s;
	int n,i,j,a,k;
	cin>>n;
    for(i=0;i<n;i++){
    	cin>>a;
    	string small="zzzzz";
    	for(j=0;j<a;j++){
    		cin>>s;
    		for(k=0;k<5;k++){
    			if(small[k]>s[k])
    			{
    				small=s;
    				break;
    			}
    			else if(small[k]==s[k])
    			continue;
    			else
    			break;
    		}
    	}
    	cout<<small<<endl;
    }
	return 0; 
}

