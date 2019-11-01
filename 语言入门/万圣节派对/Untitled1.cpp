//改成C试试 

#include "stdio.h"
#include "string.h"
#include "stdlib.h"
char s1[7],s2[7];
int main(){
	void handle();
	bool ok();
    int n,i,a,b,j;
   scanf("%d",&n);
    for(i=0;i<n;i++){
         scanf("%s %s",&s1,&s2);
        while(strcmp(s1,s2)!=0){
        	if(ok())
        	printf("%s\n",s1);
        	s1[5]++;
        	handle();
        }
        if(ok())
         printf("%s\n",s1);
        printf("\n");
    }
	return 0;
}
void handle(){
	int i,temp=0,now;
	for(i=5;i>=0;i--){
		now=temp+s1[i]-'0';
		if(now>6){
			s1[i]=now%7+'0';
			temp=now/7;
		}
		else{
		 s1[i]=now+'0';
		return ;
	}
	}
}

bool ok(){
	int i;
	if((s1[0]==s1[1]&&s1[0]==s1[2])||(s1[1]==s1[2]&&s1[1]==s1[3])||
	(s1[2]==s1[3]&&s1[2]==s1[4])||(s1[3]==s1[4]&&s1[3]==s1[5]))
	  return false;
	for(i=0;i<5;i++)
	  if(abs(s1[i]-s1[i+1])>4)
	  return false;
	return true;
}




















/*完全错误的思想  如果部分结束数位比开始数位小  循环就进不去 
#include "iostream"
#include "stdlib.h"
using namespace std;
int main(){
    int n,i,j,a[6],b[6],c[6];
    string s1,s2;
    cin>>n;
    for(i=0;i<n;i++){
    	cin>>s1>>s2;
       for(j=0;j<6;j++){
	     a[j]=s1[j]-'0';
	     b[j]=s2[j]-'0';
	 }
	   for(c[0]=a[0];c[0]<=b[0];c[0]++)	
	   for(c[1]=a[1];c[1]<=b[1];c[1]++){
	      if(abs(c[0]-c[1])>4)
		  continue; 
	   for(c[2]=a[2];c[2]<=b[2];c[2]++){
	   	if((c[0]==c[1]&&c[0]==c[2])||(abs(c[1]-c[2])>4))
	      	continue;
	   for(c[3]=a[3];c[3]<=b[3];c[3]++){
	   	 if((c[1]==c[2]&&c[1]==c[3])||(abs(c[2]-c[3])>4))
	      	continue;
	   for(c[4]=a[4];c[4]<=b[4];c[4]++){
	   	if((c[2]==c[3]&&c[2]==c[4])||(abs(c[3]-c[4])>4))
	      	continue;
	   for(c[5]=a[5];c[5]<=b[5];c[5]++){
	   	     if((c[3]==c[4]&&c[3]==c[5])||(abs(c[4]-c[5])>4))
	      	continue;
	      	cout<<c[0]<<c[1]<<c[2]<<c[3]<<c[4]<<c[5]<<endl;
	   }
}
}
}
}
      cout<<endl;
    }
	return 0;
}
*/









//尿了 超时！ 
/*
#include "iostream"
#include "stdlib.h"
using namespace std;
string s1,s2;
int main(){
	//bool check();
	void handle();
	bool ok();
    int n,i,a,b,j;
    cin>>n;
    for(i=0;i<n;i++){
    	cin>>s1>>s2;
        while(s1!=s2){
        	if(ok())
        	cout<<s1<<endl;
        	s1[5]++;
        	handle();
        }
        if(ok())
         cout<<s1<<endl;
        cout<<endl;
    }
	return 0;
}
void handle(){
	int i,temp=0,now;
	for(i=5;i>=0;i--){
		now=temp+s1[i]-'0';
		if(now>6){
			s1[i]=now%7+'0';
			temp=now/7;
		}
		else{
		 s1[i]=now+'0';
		return ;
	}
	}
}

//bool check(){
//	int i;
//	for(i=0;i<6;i++)
//	 if(s1[i]!=s2[i])
//	 return false;
//	return true;
//}

bool ok(){
	int i;
	if((s1[0]==s1[1]&&s1[0]==s1[2])||(s1[1]==s1[2]&&s1[1]==s1[3])||
	(s1[2]==s1[3]&&s1[2]==s1[4])||(s1[3]==s1[4]&&s1[3]==s1[5]))
	  return false;
	for(i=0;i<5;i++)
	  if(abs(s1[i]-s1[i+1])>4)
	  return false;
	return true;
}
*/




//暂时不要 
 /*  int a=0,b=0,flag1=0,flag2=0;
       for(j=0;j<6;j++){
       	 if(s1[j]!='0'&&flag1==0){
       	 	flag1=1;
       	 	a=a*10+s1[j]-'0';
       	 }
       	 else if(flag1==1)
       	    a=a*10+s1[j]-'0';
       	 if(s2[j]!='0'&&flag2==0){
       	 	flag2=1;
       	 	b=b*10+s1[j]-'0';
       	 }
       	 else if(flag2==1)
       	    b=b*10+s1[j]-'0';   	 
       }
       for(j=a;j<=b;j++){
       	
       }*/




