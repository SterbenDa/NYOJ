#include "iostream"
#include "cstdio"
using namespace std;
int main(){
	string a;
	char c;
	int b,tmp,i;
	while(cin>>a>>c>>b){
		tmp=0;
		string result="";
		bool begin=0;
		for(i=0;i<a.length();i++){
			 	tmp=tmp*10+a[i]-'0';
			if(tmp>=b){
			 	begin=1;
			 	result+=tmp/b+'0';
			 	tmp%=b;
	}
	       else
	       if(begin)
				 result+='0';
		}
		if(c=='/'){
			if(result=="")
			cout<<0<<endl;
			else
				cout<<result<<endl;
		}
	else if(c=='%')
		cout<<tmp<<endl;
}
	return 0;
}





