//坑爹啊！如果1前面是2要加上 2 1 1  变成 3 0 1 而不是2 0 2
//否则2 1 1 2过不去 
//如果前面为0 要再向前移动一位 如果是最后一位 要判断直到前面不为0才加上 
#include "iostream"
#define mod 10086
using namespace std;
int a[10002],n;
int main(){
	int i;
	while(cin>>n){
		int sum=1;
		for(i=0;i<n;i++){
			cin>>a[i];
		}
	    for(i=0;i<n;i++)
	    {
	    	if(a[i]==1){
	    		if(i==0){
	    			a[i+1]+=1;
	    		 a[i]=0;	
	    		}
	    		else if(i==n-1){
	    		int abc;
	    				for(abc=i-1;a[abc]==0;abc--){
	    				}
	    			a[abc]+=1;
	    		//	a[i-1]+=1;
	    		   a[i]=0;	
	    		}
	    		else{
	    			a[i]=0;
	    			if(a[i-1]==2){
	    				a[i-1]+=1;
	    				continue;
	    			}
	    		  if(a[i-1]==0){
	    			if(a[i-2]>a[i+1])
	    				a[i+1]+=1;
	    			else
	    				a[i-2]+=1;
	    			}
	    			else{
	    				if(a[i-1]>a[i+1])
	    				a[i+1]+=1;
	    			else
	    				a[i-1]+=1;
	    			}
	    			}
	    		}
	    	}
	    for(i=0;i<n;i++){
	    	if(a[i]!=0)
	    sum*=a[i];
             sum%=mod;
	}
	    cout<<sum<<endl;
	}
	return 0;
}
