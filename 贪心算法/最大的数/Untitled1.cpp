//�ӵ��������1ǰ����2Ҫ���� 2 1 1  ��� 3 0 1 ������2 0 2
//����2 1 1 2����ȥ 
//���ǰ��Ϊ0 Ҫ����ǰ�ƶ�һλ ��������һλ Ҫ�ж�ֱ��ǰ�治Ϊ0�ż��� 
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
