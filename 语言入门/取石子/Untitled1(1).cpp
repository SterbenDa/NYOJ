#include <stdio.h>
int main()
{
int n;
while(scanf("%d",&n)!=EOF)
{
if(n<3) printf("Hrdv\n");
else printf("Yougth\n");
}
  return 0; 
}

/*相邻才能取2  理解错误 
#include "iostream"
using namespace std;
int main(){
	int n,i,j;
   while(cin>>n){
   	 if(n%3==0)
   	   cout<<"Yougth"<<endl;
   	   else
   	   cout<<"Hrdv"<<endl;
}
	return 0;
}*/
