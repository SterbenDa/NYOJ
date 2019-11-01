#include "iostream"
using namespace std;
int main(){
    int i,j,n;
    cin>>n;
    string s;
    for(i=0;i<n;i++){
     cin>>s; 
      for(j=0;s[j]!='\0';j++){
         if(s[j]>='a'&&s[j]<='z')
               s[j]=s[j]-'a'+'A';  
         else
            s[j]=s[j]-'A'+'a';
	}
	  cout<<s<<endl;
    }
	return 0;
}



