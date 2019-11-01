#include "iostream"
using namespace std;
int main(){
    int n,i,j,num=1;  
    int length[26];
    string s,result[16];
    string handle[26][16];
    while(cin>>n){
      if(n==0)
      break;
      for(i=1;i<26;i++)
         length[i]=0;
     for(i=1;i<=n;i++)
     {
     	cin>>s;
     	handle[s.length()][length[s.length()]++]=s;
     }  
     int now=1;
     for(i=1;i<26;i++)
       for(j=0;j<length[i];j++) 	
        result[now++]=handle[i][j];
     now-=1;
     cout<<"SET "<<num++<<endl;
     for(i=1;i<=now;i+=2)
          cout<<result[i]<<endl;
          if(now%2==1)
             now-=1;
        for(i=now;i>1;i-=2)
          cout<<result[i]<<endl;
}
	return 0;
}




/*
#include "iostream"
using namespace std;
int main(){
    int n,i,j,num=1;  
    string s[20];
    while(cin>>n){
    	if(n==0)
    	break;
       for(i=1;i<=n;i++)
       cin>>s[i];
        for(i=1;i<=n-1;i++)
         for(j=i+1;j<=n;j++)
         if(s[i].length()>s[j].length()){
         	string temp=s[i];
         	s[i]=s[j];
         	s[j]=temp;
         }
         for(i=1;i<=n;i++)
         cout<<s[i]<<endl;
         
         
        cout<<"SET "<<num++<<endl;
        for(i=1;i<=n;i+=2)
          cout<<s[i]<<endl;
          if(n%2==1)
            n-=1;
        for(i=n;i>1;i-=2)
          cout<<s[i]<<endl;
    } 
	return 0;
}
*/


/*他妈题目理解错了 
#include "iostream"
using namespace std;
int main(){
    int n,i,num=1;  
    string s[20];
    while(cin>>n){
    	if(n==0)
    	break;
    	int left=0,right=n-1;
    	if(n%2==1){
    	while(right!=left){
    		cin>>s[left++]>>s[right--];
    	}
    	cin>>s[left];
    		cout<<"SET "<<num++<<endl;
    	for(i=0;i<n;i++)
    	cout<<s[i]<<endl;
    }
    else{
    	while(right>left){
    		cin>>s[left++]>>s[right--];
    	}
    		cout<<"SET "<<num++<<endl;
    	for(i=0;i<n;i++)
    	cout<<s[i]<<endl;
    }
    }
	return 0;
}*/
