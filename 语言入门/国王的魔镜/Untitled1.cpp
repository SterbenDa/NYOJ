#include "iostream"
using namespace std;
struct student{
   string name;
   int qimo,banji,lunwen;
   char ganbu,west;
   int sum;
};
int main(){
	student s[100];
	int n,i,m,j;
	string name;
	cin>>n;
	for(i=0;i<n;i++){
		int total=0,big=-99999999,id;
		cin>>m;
		for(j=0;j<m;j++){
		   cin>>s[j].name>>s[j].qimo>>s[j].banji>>s[j].ganbu>>s[j].west>>s[j].lunwen;
		   s[j].sum=0;
		   if(s[j].qimo>80&&s[j].lunwen>=1){
		     s[j].sum+=8000;
		     total+=8000;
		 }
		   if(s[j].qimo>85&&s[j].banji>80){
		   	s[j].sum+=4000;
		     total+=4000;
		   }
		   if(s[j].qimo>90){
		   	  s[j].sum+=2000;
		   	  total+=2000;
		   }
		   if(s[j].qimo>85&&s[j].west=='Y'){
		   	  s[j].sum+=1000;
		   	  total+=1000;
		   }
		   if(s[j].banji>80&&s[j].ganbu=='Y'){
		   	  s[j].sum+=850;
		   	  total+=850;
		   }
		   if(big<s[j].sum){
		      big=s[j].sum;
		      id=j;
		  }
		}
		cout<<s[id].name<<endl;
		cout<<big<<endl;
		cout<<total<<endl;
	}
	return 0;
}
