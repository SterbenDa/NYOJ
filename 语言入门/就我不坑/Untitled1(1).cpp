#include "iostream"
using namespace std;
int main(){
	int a[15]; 
	string number[10]={"Áã","Ò¼","·¡","Èþ","ËÁ","Îé","Â½","Æâ","°Æ","¾Á"};
	string wei[]={"","Ê°","°Û","Çª"};
	string s;
    int i,n;
    while(cin>>s){
       int num=s.length();
       bool flag=0;
    	for(i=0,n=num-1;i<num;i++,n--){
    		a[n]=s[i]-'0';
    	}
    	if(num<=4){
    	   for(i=num-1;i>=0;i--){
    	   	if(a[i]==0&&i>0&&flag==0){
    	   		int j,ok=0;
    	   		for(j=i-1;j>=0;j--){
    	   			if(a[j]!=0){
    	   			  ok=1;
    	   			   break;
    	   		}
    	   		}
    	   		if(ok){
    	   	   	cout<<number[a[i]];
    	   	   	flag=1;}
    	   	   }
    	   	else if(a[i]!=0){
    	   	cout<<number[a[i]]<<wei[i];
    	   	flag=0;
    	   }
    	   }
    	   cout<<endl;
		   continue; 
    }
     else if(num>=5&&num<=8){
     	   for(i=num-1,n=num-5;i>=4;i--,n--){
     	   	if(a[i]==0&&i>0&&flag==0){
     	   		int j,ok=0;
     	   		for(j=i-1;j>=4;j--){
     	   			if(a[j]!=0){
     	   				ok=1;
     	   				break;
     	   			}
     	   		}
     	   		if(ok){
    	   	   	cout<<number[a[i]];
    	   	   	  flag=1;
    	   	   }  
    	   	   }
    	   	else if(a[i]!=0){
     	   	cout<<number[a[i]]<<wei[n];
     	   	  flag=0;
     	   }
     	   }
     	   cout<<"Íò";
     	  for(;i>=0;i--){
     	  	if(a[i]==0&&i>0&&flag==0){
     	  		int j,ok=0;
     	   		for(j=i-1;j>=0;j--){
     	   			if(a[j]!=0){
     	   				ok=1;
     	   				break;
     	   			}
     	   		}
     	   		if(ok){
    	   	   	cout<<number[a[i]];
    	   	   	  flag=1;
    	   	   }
    	   	   }
    	   	else if(a[i]!=0){
     	   	cout<<number[a[i]]<<wei[i];
     	   	flag=0;
     	   }
     	   } 	  
    	cout<<endl;
		   continue;
    }
     else if(num>8){
     	bool fuck=0;
     	 for(i=num-1,n=num-9;i>=8;i--,n--){
     	 	if(a[i]==0&&i>0&&flag==0){
     	 		int j,ok=0;
     	   		for(j=i-1;j>=8;j--){
     	   			if(a[j]!=0){
     	   				ok=1;
     	   				break;
     	   			}
     	   		}
     	   		if(ok){
    	   	   	cout<<number[a[i]];
    	   	   	flag=1;
    	   	   }
    	   	   }
    	   	else if(a[i]!=0){
     	   	cout<<number[a[i]]<<wei[n];
     	   	  flag=0;
     	   }
     	   }
     	   cout<<"ÒÚ";
     	 for(n=3;i>=4;i--,n--){
     	 	if(a[i]==0&&i>0&&flag==0){
     	 			int j,ok=0;
     	   		for(j=i-1;j>=4;j--){
     	   			if(a[j]!=0){
     	   				ok=1;
     	   				break;
     	   			}
     	   		}
     	   		if(ok){
    	   	   	cout<<number[a[i]];
    	   	   	 flag=1;
    	   	   }
    	   	   }
    	   	else if(a[i]!=0){
     	   	cout<<number[a[i]]<<wei[n];
     	   	  flag=0;
     	   	  fuck=1;
     	   }		 
     	   }
     	   if(fuck)
  	          cout<<"Íò";
     	  for(;i>=0;i--){
     	  	if(a[i]==0&&i>0&&flag==0){
     	  			int j,ok=0;
     	   		for(j=i-1;j>=0;j--){
     	   			if(a[j]!=0){
     	   				ok=1;
     	   				break;
     	   			}
     	   		}
     	   		if(ok){
    	   	   	cout<<number[a[i]];
    	   	   	flag=1;
    	   	   }
    	   	   }
    	   	else if(a[i]!=0){
     	   	cout<<number[a[i]]<<wei[i];
     	   	 flag=0;
     	   }
     	   } 	  
    	cout<<endl;
		   continue;
     }
}
	return 0;
}



