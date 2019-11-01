#include "iostream"
#include "stack"
using namespace std;
int main(){
	int n,p,q,i,from,to,tmp;
	cin>>n;
	stack<int> s[4];
	while(n--){
		bool ok=1;
		cin>>p>>q;
		for(i=p;i>=1;i--)
		  s[1].push(i);
		  for(i=0;i<q;i++){
		  	cin>>from>>to;
		  	if(ok==0)
		  	 continue;
		  	if(s[from].empty()){
		  	     ok=0;
		  	    continue;   
		  	 }
		  	else {
		  	  	  tmp=s[from].top();
					  s[from].pop();		  	         
		  	  }
		  	if(!s[to].empty()&&tmp>s[to].top()){
		  	   ok=0;
		      continue;	   
		  }
		  	else
		  	   s[to].push(tmp);
  }
		  if(ok)
		  cout<<"legal"<<endl;
		  else
		  cout<<"illegal"<<endl;
		  for(i=1;i<4;i++)
		    while(!s[i].empty())  s[i].pop();
	}
	return 0;
}
