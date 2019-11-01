#include <iostream>
using namespace std;
int main(){
	string s;
	bool ok;
	int i,n,m,t,now,eat;
	cin>>t;
	while(t--){
		ok=0;
		cin>>n>>m>>s;
		now=0;
		eat=0;
		for(i=0;s[i]!='\0'&&!ok;i++){
			if(s[i]=='e')
			eat++;
			else if(s[i]=='a')
			n--;
			else if(s[i]=='s')
			{
				m++;
				continue;
			}
			if(eat==3)
			{
				eat=0;
				cout<<"AHaaaaa Ez sb"<<endl;
				n/=2;
		}
		  if(n<=0)	
		  	break;		  
			m-=2;
			if(m<=0){
				ok=1;
				break;
			}		
		}
		if(ok)
		cout<<"Ez 666"<<endl;
		if(n<=0||i==s.length())
		cout<<"GG"<<endl;
	}
	return 0;
}
