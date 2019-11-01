#include "iostream"
using namespace std;
int main(){
	int n,i,j;
	string s;
	int book[3];
	cin>>n;
	for(i=0;i<n;i++){
		book[0]=0;  //R
		book[1]=0;   //W
		book[2]=0;   //B
	    cin>>s;
	    for(j=0;s[j]!='\0';j++){
	    if(s[j]=='R')
	    book[0]++;
	    else if(s[j]=='W')
	    book[1]++;
	   else if(s[j]=='B')
	    book[2]++;
	}
	   for(j=0;j<book[0];j++)
	    cout<<"R";
	     for(j=0;j<book[1];j++)
	    cout<<"W";
	     for(j=0;j<book[2];j++)
	    cout<<"B";
	 cout<<endl;
	}
	return 0;
}


