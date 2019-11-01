#include "iostream"
using namespace std;
int main(){
	int n,i,m,j;
	cin>>n;
	string s;
	for(i=0;i<n;i++){
	    cin>>s>>m;
	    string result="";
	    int len=s.length(),flag=0;
	    while(m>0){
	    	int big=-99999999,id;
		for(j=flag;j<=flag+m;j++){
			if(big<s[j]-'0'){
				big=s[j]-'0';
				id=j;
			}
		}
	       m-=id-flag;
	       flag=id+1;
	       result+=s[id];
	   }
	   for(j=flag;j<len;j++)
	    result+=s[j];
	   cout<<result<<endl;
	}
	return 0;
}

















//复杂化问题  而且错误  如果排序前面的找了不行后面会跳过这个数 导致错误 
/*
#include "iostream"
using namespace std;
int main(){
	int n,i,m,j,a[100],k;
	cin>>n;
	string s;
	for(i=0;i<n;i++){
		int left=0,now=0;
		string result="";
		cin>>s>>m;
		int len=s.length();
	    for(j=0;j<len;j++)
	       a[j]=s[j]-'0';
		 for(j=0;j<len-1;j++)
		  for(k=j+1;k<len;k++)
		  	if(a[j]<a[k]){
		  		int temp=a[j];
		  		a[j]=a[k];
		  		a[k]=temp;
		  	}
			for(j=0;j<len;j++){
				for(k=left;k<len;k++){
				  if(s[k]-'0'==a[j]){
				  if(k-left>m){
				  	break;
				  }
				  else{
				  now=k;
				  m-=k-left;
				  left=k+1;
				  result+=s[k];
				  break;
			}
			}
		}
		if(m==0)
		break;						   
}
   for(j=now+1;j<len;j++)
       result+=s[j];
			cout<<result<<endl;	
	}
	return 0;
}
*/







//错误的思想 误以为将0-9按数量删除 题目应该让最大数尽可能排在前面 
/*
#include "iostream"
using namespace std;
int main(){
	int n,i,m,j;
	int book[10];
	cin>>n;
	string s;
	for(i=0;i<n;i++){
		cin>>s>>m;
		for(j=0;j<10;j++)
		book[j]=0;
		for(j=0;j<s.length();j++){
			book[s[j]-'0']++;
		}
		int flag=-1;
		for(j=0;j<10;j++){
	      if(m>=book[j])
	      m-=book[j];
	      else{
	      	book[j]=m;
	      	flag=j;
	      	break;
	      }
		}
		for(j=0;j<s.length();j++){
		   if(s[j]-'0'<flag)
		     continue;
		     else if(s[j]-'0'==flag&&book[flag]>0){
		     	book[flag]--;
		     	continue;
		     }
		     else
		     cout<<s[j];
		}
		cout<<endl;
	}
	return 0;
}*/
