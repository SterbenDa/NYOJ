#include "cstdio"
#include "stack"
using namespace std;
const int M=10000+50;
int main(){
	int n,i,j;
	char c[M];
	while(scanf("%d",&n)==1){
		stack<char> s;
		for(i=0;i<n;i++){
			bool ok=1;
			scanf("%s",c);
			for(j=0;c[j]!='\0';j++){
				if(c[j]=='['||c[j]=='(')
				s.push(c[j]);
				else if(c[j]==']'){
					if(s.empty()){
						ok=0;
						break;
					}
				else if(s.top()!='['){
					ok=0;
					break;
				}
				else
				 s.pop();
			}
			else if(c[j]==')'){
					if(s.empty()){
						ok=0;
						break;
					}
			else if(s.top()!='('){
					ok=0;
					break;
				}
				else
				 s.pop();
			}
			}		
			if(ok)
			printf("Yes\n");
			else
			printf("No\n");
			while(!s.empty())
			s.pop();
		}
	}
	return 0;
}
