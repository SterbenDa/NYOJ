/*
#include "iostream"
using namespace std;
int main(){
   int i,j,k,n;
   string s;
   bool book[10000];
   cin>>n;
   for(i=0;i<n;i++)
    {
    	int num=0;
   	for(j=1;j<10000;j++)
   	      book[j]=0;  
       
       cin>>s;
      while(1){
       for(j=0;j<3;j++)
        for(k=j+1;k<4;k++)
        if(s[j]>s[k]){
        	char c=s[j];
        	s[j]=s[k];
        	s[k]=c;
        }
        cout<<s[0]<<s[1]<<s[2]<<s[3]<<endl;
		int a=(s[3]-'0')*1000+(s[2]-'0')*100+(s[1]-'0')*10+(s[0]-'0');
	    int b=(s[0]-'0')*1000+(s[1]-'0')*100+(s[2]-'0')*10+(s[3]-'0');
	    cout<<a<<"   "<<b<<endl;
	    j=a-b;
	    if(book[j]==1){
	      break;	
	    }
	    book[j]=1;
	    num++;
	    k=3;
	    while(j!=0){
	    	s[k--]=char(j%10);
	    	j/=10;
	    }
	    for(j=0;j<=k;j++){
	    	s[j]='0';
	    }
	}
	    cout<<num+1<<endl;
    }
	return 0;
}
*/











/*#include "iostream"
using namespace std;
int main(){
   int i,j,k,n;
   string s;
   bool book[10][10][10][10];
   cin>>n;
   for(i=0;i<n;i++)
    {
    	int num=0;
   	  int f1,f2,f3,f4;
   	  for(f1=0;f1<10;f1++)
   	   for(f2=0;f2<10;f2++)
   	    for(f3=0;f3<10;f3++)
   	     for(f4=0;f4<10;f4++)
   	      book[f1][f2][f3][f4]=0;  
   	      
       cin>>s;
      while(1){
       for(j=0;j<3;j++)
        for(k=j+1;k<4;k++)
        if(s[j]>s[k]){
        	char c=s[j];
        	s[j]=s[k];
        	s[k]=c;
        }
	    int a=(s[3]-'0')*1000+(s[2]-'0')*100+(s[1]-'0')*10+(s[0]-'0');
	    int b=(s[0]-'0')*1000+(s[1]-'0')*100+(s[2]-'0')*10+(s[3]-'0');
	    j=a-b;
		f1=j%10;j/=10;s[3]=(char)f1;
		f2=j%10;j/=10;s[2]=(char)f2;
	    f3=j%10;j/=10;s[1]=(char)f3;
	    f4=j%10;s[0]=(char)f4;
	    if(book[f4][f3][f2][f1]==1){
	      break;	
	    }
	    num++;
	}
	    cout<<num<<endl;
    }
	return 0;
}*/
