/*˼·�ܼ� ��������Ͱ뾶 �õ�ÿ����ˮ�����ܹ����ǵ��������� 

Ȼ���������С�������� 

ɸѡʱ�������ˮ���õ�������С�ڵ�����ʼ��star��whileѭ��Ѱ���ܹ���������������

Ȼ�������ʼ��starΪѰ�ҵ������������*/

#include <stdio.h>
#include <math.h>
#include <algorithm>
using namespace std;
struct node 
{
	double left,right;
}c[10005];
bool cmp(node x,node y)//����������
{
	return x.left<y.left;
}
int main()
{
	int t,n;
	double l,h,x,r,temp,star,p;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %lf %lf",&n,&l,&h);
		for(int i=0;i<n;i++)
		{
			scanf("%lf %lf",&x,&r);
			if(r<h/2)//����뾶С�ڸߵ�һ��  ���ܸ��ǣ�temp=0;
			temp=0;
			else
			temp=sqrt(pow(r,2)-pow(h/2,2));
			c[i].left=x-temp,
			c[i].right=x+temp;
		}
		sort(c,c+n,cmp);
		int sum=0;
		star=0;
		for(int i=0;i<n;i++)
		{
			if(c[i].left<=star)//�ҵ���һ��������С�ڵ���star��
			{
			        p=c[i].right;
				while(c[i].left<=star)//Ѱ������������
				{
					p=max(p,c[i].right);
					i++;
					if(i==n)
					break;
				}
				star=p;//����������
				i--,sum++;
			}
			if(star>=l)//��ǰ����ѭ��
			break;
		}
		if(star>=l)
		printf("%d\n",sum);
		else
		printf("0\n",star);
	}
	return 0;
}
















/*wa
#include "iostream"
#include "math.h"
#include "algorithm"
struct Node{
	int x,r;
};
bool cmp(Node a,Node b){
		if(a.x==b.x)
		  return a.r>b.r;
		return a.x>b.x;	
}
using namespace std;
int main(){
    int t,n,i,w,h;
    Node node[10050];
    cin>>t;
    while(t--){
    	int num=0;
    	cin>>n>>w>>h;
    	for(i=0;i<n;i++)
    	cin>>node[i].x>>node[i].r;
    sort(node,node+n,cmp);
	while(1){
		bool ok=0;
      for(i=n-1;i>=0;i--){  
      	if(h/2*h/2+node[i].x*node[i].x<=node[i].r*node[i].r)
      	{
      		ok=1;
      		num++;
      		w-=2*node[i].x;
      		if(w<=0)
      		break;
      	}
      }
      if(ok==0&&w>0){
      	cout<<0<<endl;
      	break;
      }
      else if(w<=0){
      	cout<<num<<endl;
      	break;
      }   	
  }
    //cout<<node[i].x<<" "<<node[i].r<<endl;  
    }
	return 0;
}*/
