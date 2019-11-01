#include "iostream"
#include "map"
using namespace std;
map<string,int> m;
int main(){
	int n,i;
	string s;
	cin>>n;
	while(n--){
		cin>>s;
		if(m.count(s)==0){
			m[s]++;
		 cout<<"OK"<<endl;
	}
	  else{
		  cout<<s<<m[s]<<endl;
	    m[s]++;	  
	}
	}
}
