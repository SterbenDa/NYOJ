#include "iostream" 
#include "map"
#include "string"
using namespace std;
map<string,int> m;
string s;
int main(){
	int n,i,len,j,k;
    cin>>n;
	for(i=0;i<n;i++){
		int sum=0;
		cin>>len>>s;
		for(j=0;j+len-1<s.length();j++){
			string tmp=s.substr(j,len);
		//	 cout<<tmp<<endl;
			if(m.count(tmp)>0) {
				sum++;
			}
			else{
			m[tmp]++;
		}
		}
    cout<<sum<<endl;
    m.clear();
	}
	return 0;
}




/*³¬Ê± 
#include "cstdio"
#include "map"
#include "string"
#include "string.h"
using namespace std;
map<string,int> m;
char c[100050];
int main(){
	int n,i,len,j,k;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		int sum=0;
		scanf("%d%s",&len,c);
		for(j=0;j+len-1<strlen(c);j++){
			string tmp="";
			for(k=0;k<len;k++){
				tmp+=c[j+k];
			}
			// cout<<tmp<<endl;
			if(m.count(tmp)>0) {
				sum++;
			}
			else{
			m[tmp]++;
		}
		}
    printf("%d\n",sum);
    m.clear();
	}
	return 0;
}*/
