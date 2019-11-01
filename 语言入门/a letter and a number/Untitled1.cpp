#include "iostream"
using namespace std;
int main()
{
  	int n,i;
  	char a;
  	int b;
  	cin>>n;
  	for(i=0;i<n;i++){
  		cin>>a>>b;
  		if(a>='a'&&a<='z')
  		  cout<<-(a-'a'+1)+b<<endl;
  		else if(a>='A'&&a<='Z')
  		cout<<a-'A'+1+b<<endl;
  	}
	return 0;
}
