#include "iostream"
using namespace std;
int main(){
    int i,j,n;
    cin>>n;
    string s;
    for(i=0;i<n;i++){
     cin>>s; 
	 int sum=0;
      for(j=0;s[j]!='\0';j++)
         if(s[j]>='a'&&s[j]<='z')
            sum=(sum+1)%26;
        if(sum==0)
        cout<<'z'<<endl;
         else
		 cout<<(char)(sum-1+'a')<<endl;   
    }
	return 0;
}



