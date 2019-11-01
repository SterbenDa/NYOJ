#include "iostream"
using namespace std;
int main(){
	int gys(int a,int b);
	string s;
	while(cin>>s){
		int yuefen;
	  int a=s[0]-'0',b=s[2]-'0',c=s[4]-'0',d=s[6]-'0';
    	char fuhao=s[3];
		if(a==0&&c!=0){
			yuefen=gys(c,d);
			if(fuhao=='+')
			cout<<c/yuefen<<"/"<<d/yuefen<<endl;
			else if(fuhao=='-')
			cout<<-c/yuefen<<"/"<<d/yuefen<<endl;
			continue;
		}
		else if(a!=0&&c==0){
			yuefen=gys(a,b);		
			cout<<a/yuefen<<"/"<<b/yuefen<<endl;
			continue;
		}
			
	   int gbs=b*d/gys(b,d);
	   a*=gbs/b;
	   b=gbs;
	   c*=gbs/d;
	   d=gbs;
	   if(fuhao=='+'){
	   	if((a+c)%b==0){
	   		cout<<(a+c)/b<<endl;
	   		continue;
	   	}	   	  
	   	  yuefen=gys(b,a+c);
	   	  cout<<(a+c)/yuefen<<"/"<<b/yuefen<<endl;
	   }
	   else if(fuhao=='-'){
	   	if((a-c)%b==0){
	   		cout<<(a-c)/b<<endl;
	   		continue;
	   	}	  
	   	if(a-c<0)
	   	 yuefen=gys(b,c-a);
	   	 else if(a-c==0){
	   	 	 cout<<0<<endl;
	   	 	 continue;
	   	 }
	   	  else
	   	 yuefen=gys(b,a-c);
	   cout<<(a-c)/yuefen<<"/"<<b/yuefen<<endl;
	   }
	}
	return 0;
}
int gys(int a,int b){
	if(a<b){
		int temp=a;
		a=b;
		b=temp;
	}
	int r;
	while(b!=0){
		r=a%b;
		a=b;
		b=r;
	}
	return a;
}
