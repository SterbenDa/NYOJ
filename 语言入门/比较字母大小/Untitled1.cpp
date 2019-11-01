#include "iostream"
using namespace std;
int main(){
    int n,i;
    char a,b;
    cin>>n;
    for(i=0;i<n;i++){
      cin>>a>>b;
     if(a>b)
     cout<<a<<"<"<<b<<endl;
     else if(a==b)
      cout<<a<<"="<<b<<endl;
      else
    cout<<a<<">"<<b<<endl;
 }
	return 0;
}
