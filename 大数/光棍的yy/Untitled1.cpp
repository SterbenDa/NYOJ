#include "iostream"
using namespace std;
int main(){
	string s,result[205];
	int n,i;
	cin>>n;
	result[1]="1";result[2]="2";
	for(i=3;i<=201;i++)
	  a[i]=a[i-1]+a[i-2];
	while(n--){
		cin>>s;
		cout<<s[s.length()]<<endl;
	}
	return 0;
}









/*递推关系对 错在溢出 要用大数做 
#include "iostream"
using namespace std;
int main(){
	string s;
	int n,i;
	cin>>n;
	int a[210];
	a[1]=1;a[2]=2;
	for(i=3;i<=201;i++)
	  a[i]=a[i-1]+a[i-2];
	while(n--){
		cin>>s;
		cout<<a[s.length()]<<endl;
	}
	return 0;
}
*/
