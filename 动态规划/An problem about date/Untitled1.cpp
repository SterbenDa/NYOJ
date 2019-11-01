#include "stdio.h"
int main(){
	int y,m,d;
	while(scanf("%d %d %d",&y,&m,&d)==3){
		if(m<=2){
			m+=12;
			y--;
		}
		int re=(d+2*m+3*(m+1)/5+y+y/4-y/100+y/400+1)%7;
		printf("%d\n",re);
}
	return 0;
}





/*
#include "iostream"
using namespace std;
int main(){
	int y,m,d;
	while(cin>>y>>m>>d){
		if(m<=2){
			m+=12;
			y--;
		}
		int re=(d+2*m+3*(m+1)/5+y+y/4-y/100+y/400+1)%7;
		cout<<re<<endl;
}
	return 0;
}
*/
