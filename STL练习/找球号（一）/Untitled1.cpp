#include "cstdio"
#include "set"
using namespace std;
int main(){
	int n,m,a,i;
	set<int> s;
	scanf("%d%d",&m,&n);
		for(i=0;i<m;i++)
		{
			scanf("%d",&a);
			s.insert(a);
		}
		for(i=0;i<n;i++){
			scanf("%d",&a);
			if(s.count(a)==0)
		printf("NO\n");
			else
			printf("YES\n");	
		}
		s.clear();
	return 0;
}










/*³¬Ê±  
#include "cstdio"
#include "set"
using namespace std;
int main(){
	int n,m,a,i;
	set<int> s;
	while(scanf("%d%d",&m,&n)==2){
		for(i=0;i<m;i++)
		{
			scanf("%d",&a);
			s.insert(a);
		}
		for(i=0;i<n;i++){
			scanf("%d",&a);
			if(s.count(a)==0)
		printf("NO\n");
			else
			printf("YES\n");	
		}
		s.clear();
	}
	return 0;
}*/
