#include "iostream"
using namespace std;
int main(){
	int t[302],w[302],total[302];
	int n,i,j,a,num=1;
	t[1]=1;
	total[0]=0;
	for(i=2,j=1;i<=301;j++,i++){
		t[i]=t[i-1]+i;
		w[j]=j*t[i];
		total[j]=total[j-1]+w[j];
	}
	cin>>n;
	for(i=0;i<n;i++){
		cin>>a;
		cout<<num++<<" "<<a<<" "<<total[a]<<endl;
	}
	return 0;
}
