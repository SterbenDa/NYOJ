#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;
struct Node{
	long long sum,jishu,add;
	int left,right;
};
const int N=10005+5;
const int MAXN=N*4;
long long num[N]; 
int n;
Node node[MAXN];
void Init(int now,int le,int ri){
    node[now].left=le;
	node[now].right=ri;
	node[now].add=0;
   	if(le==ri){
		node[now].sum=num[le];
		if(num[le]%2==1)
		node[now].jishu=1;
		else
		node[now].jishu=0;
		return;
	}
   	int mid=(le+ri)>>1,next=now<<1;  	
	Init(next,le,mid);
	Init(next+1,mid+1,ri);
	node[now].sum=node[next].sum+node[next+1].sum;
	node[now].jishu=node[next].jishu+node[next+1].jishu;
}
void Add(int now,int le,int ri,long long value){
	int next=now<<1;
	if(node[now].left==le&&node[now].right==ri)
	{
		node[now].sum+=(node[now].right-node[now].left+1)*value;
		node[next].add+=value;
		node[next+1].add+=value;
	if(value%2==1)
		node[now].jishu=(node[now].right-node[now].left+1)-node[now].jishu;
		node[now].add=0; 
		return;
	}
	int mid=(node[now].left+node[now].right)>>1;
	if(ri<=mid)
	Add(next,le,ri,value);
	else if(le>mid)
		Add(next+1,le,ri,value);
	else{
		Add(next,le,mid,value);
		Add(next+1,mid+1,ri,value);		
	}
	node[now].sum=node[next].sum+node[next+1].sum;
	node[now].jishu=node[next].jishu+node[next+1].jishu;
}
inline void Update(int now){
    int next=now<<1;	
    node[now].sum+=(node[now].right-node[now].left+1)*node[now].add;
    if(node[now].add%2==1)
	node[now].jishu=(node[now].right-node[now].left+1)-node[now].jishu;	
       
	node[next].add=node[now].add;
	node[next+1].add=node[now].add;
    node[now].add=0; 
}
long long GetJishu(int now,int le,int ri){
	int next=now<<1;
	if(node[now].add!=0)
		Update(now);
	if(node[now].left==le&&node[now].right==ri)
		return node[now].jishu;
		
	 int mid=(node[now].left+node[now].right)>>1;
	if(ri<=mid)
	return GetJishu(next,le,ri);
	else if(le>mid)
	return GetJishu(next+1,le,ri);
	else
	return 	GetJishu(next,le,mid)+GetJishu(next+1,mid+1,ri);
}
long long GetSum(int now,int le,int ri){
	int next=now<<1;
	if(node[now].add!=0)
		Update(now);
	if(node[now].left==le&&node[now].right==ri)
		return node[now].sum;	
	int mid=(node[now].left+node[now].right)>>1;
	if(ri<=mid)
	return GetSum(next,le,ri);
	else if(le>mid)
	return GetSum(next+1,le,ri);
	else
	return 	GetSum(next,le,mid)+GetSum(next+1,mid+1,ri);
}
int main(){	
	int m,i;
	char s;
	int a,b;
	long long c;
	while(scanf("%d%d",&n,&m)==2){
		for(i=1;i<=n;i++)
			scanf("%lld",&num[i]);
			Init(1,1,n);	
			for(i=0;i<m;i++){
				  cin>>s;
				if(s=='A'){
					scanf("%d%d%lld",&a,&b,&c);
					Add(1,a,b,c);
				}
				else if(s=='S'){
					scanf("%d%d",&a,&b);
					printf("%lld\n",GetSum(1,a,b));
				}
				else if(s=='Q'){
					scanf("%d%d",&a,&b);
						printf("%lld\n",GetJishu(1,a,b));
				}				
			}
	}
	return 0;
}









/*超时 
#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;
struct Node{
	bool jiou;
	int sum,jishu;
	int add;
	int left,right;
};
const int N=10005+5;
const int MAXN=N*4;
int num[N],n; 
Node node[MAXN];
void Init(int now,int le,int ri);
void Add(int now,int le,int ri,int value);
int GetSum(int now,int le,int ri);
void Update(int now,int le,int ri);
int GetJishu(int now,int le,int ri);
int main(){	
	int m,i;
	char s;
	int a,b,c;
	while(scanf("%d%d",&n,&m)==2){
		for(i=1;i<=n;i++)
			scanf("%d",&num[i]);
			Init(1,1,n);	
			for(i=0;i<m;i++){
				  cin>>s;
				if(s=='A'){
					scanf("%d%d%d",&a,&b,&c);
					Add(1,a,b,c);
				}
				else if(s=='S'){
					scanf("%d%d",&a,&b);
					printf("%d\n",GetSum(1,a,b));
				}
				else if(s=='Q'){
					scanf("%d%d",&a,&b);
						printf("%d\n",GetJishu(1,a,b));
				}				
			}
	}
	return 0;
}

void Update(int now, int le,int ri){
    int next=now<<1;
    if(node[now].left==node[now].right){
    	int aaa=node[now].left;
     	num[aaa]+=node[now].add;
        node[now].sum+=node[now].add;	
     	if(num[aaa]%2==0)
     	node[now].jishu=0;
     	else
     	node[now].jishu=1;   	
     	node[now].add=0;
     	return;
	}
	node[next].add=node[now].add;
	node[next+1].add=node[now].add;
	node[now].add=0;
	int mid=(node[now].left+node[now].right)>>1;
	if(ri<=mid)
		Update(next,le, ri);    
	else if(le>mid)
	      Update(next+1,le,ri);
	else
	{
		 Update(next,le, mid);
		 Update(next+1,mid+1,ri);
	}
	node[now].jishu=node[next].jishu+node[next+1].jishu;
	node[now].sum=node[next].sum+node[next+1].sum;
}
int GetJishu(int now,int le,int ri){
	int next=now<<1;
	if(node[now].jiou!=0)
		Update(now, le, ri);
	if(node[now].left==le&&node[now].right==ri)
		return node[now].jishu;
		
	 int mid=(node[now].left+node[now].right)>>1;
	if(ri<=mid)
	return GetJishu(next,le,ri);
	else if(le>mid)
	return GetJishu(next+1,le,ri);
	else
	return 	GetJishu(next,le,mid)+GetJishu(next+1,mid+1,ri);
}


int GetSum(int now,int le,int ri){
	int next=now<<1;
	if(node[now].add!=0)
		Update(now,le,ri);
	if(node[now].left==le&&node[now].right==ri)
		return node[now].sum;	
	int mid=(node[now].left+node[now].right)>>1;
	if(ri<=mid)
	return GetSum(next,le,ri);
	else if(le>mid)
	return GetSum(next+1,le,ri);
	else
	return 	GetSum(next,le,mid)+GetSum(next+1,mid+1,ri);
}


void Add(int now,int le,int ri,int value){
	int next=now<<1;
	if(node[now].left==le&&node[now].right==ri)
	{
		if(le==ri){
			node[now].sum+=value;
			num[le]+=value;
			if(num[le]%2==0)
			node[now].jishu=0;
			else
			node[now].jishu=1;
			return;
		} 
		node[now].sum+=(node[now].right-node[now].left+1)*value;
		node[next].add+=value;
		node[next+1].add+=value;
		node[now].add=0; 
		return;
	}
	int mid=(node[now].left+node[now].right)>>1;
	if(ri<=mid)
	Add(next,le,ri,value);
	else if(le>mid)
		Add(next+1,le,ri,value);
	else{
		Add(next,le,mid,value);
		Add(next+1,mid+1,ri,value);		
	}
	node[now].jiou=1;
	node[now].sum=node[next].sum+node[next+1].sum;
}

void Init(int now,int le,int ri){
    node[now].left=le;
	node[now].right=ri;
	node[now].add=0;
	node[now].jiou=false;
   	if(le==ri){
		node[now].sum=num[le];
		if(num[le]%2==1)
		node[now].jishu=1;
		else
		node[now].jishu=0;
		return;
	}
   	int mid=(le+ri)>>1,next=now<<1;  	
	Init(next,le,mid);
	Init(next+1,mid+1,ri);
	node[now].sum=node[next].sum+node[next+1].sum;
	node[now].jishu=node[next].jishu+node[next+1].jishu;
}
*/




/*还没改好 
#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;
struct Node{
	int sum,jishu,va;
	int add;
	int left,right;
	Node *lchild;
	Node *rchild; 
};
const int N=10005+5;
int num[N]; 
void Add(Node *bt,int le,int ri,int value);
int GetJishu(Node *bt,int le,int ri);
int GetSum(Node *bt,int le,int ri);
Node* Init(int le,int ri);
int main(){	
	int n,m,i;
	char s;
	int a,b,c;
	while(scanf("%d%d",&n,&m)==2){
		for(i=1;i<=n;i++)
			scanf("%d",&num[i]);
			Node* node=Init(1,n);	
			for(i=0;i<m;i++){
				  cin>>s;
				if(s=='A'){
					scanf("%d%d%d",&a,&b,&c);
					Add(node,a,b,c);
				}
				else if(s=='S'){
					scanf("%d%d",&a,&b);
					printf("%d\n",GetSum(node,a,b));
				}
				else if(s=='Q'){
					scanf("%d%d",&a,&b);
						printf("%d\n",GetJishu(node,a,b));
				}
				
			}
	}
	return 0;
}
void Update(Node *bt){
	
}
void Add(Node *bt,int le,int ri,int value){
	if(bt->left==le&&bt->right==ri){
	      bt->add+=value;
	      bt->sum+=(ri-le+1)*value;
		return;
	}
	int mid=(bt->left+bt->right)/2;
	if(ri<=mid)
	  Add(bt->lchild,le,ri,value);
	  else if(le>mid)
	   Add(bt->rchild,le,ri,value);
	   else
	   {
	   	Add(bt->lchild,le,mid,value);
	   	Add(bt->rchild,mid+1,ri,value);
	   }
	bt->sum=bt->lchild->sum+bt->rchild->sum;
}

int GetJishu(Node *bt,int le,int ri){
	if(bt->left==le&&bt->right==ri)
		return bt->jishu;
	int mid=(bt->left+bt->right)/2;
	if(ri<=mid)
	return GetJishu(bt->lchild,le,ri);
	else if(le>mid)
	  return GetJishu(bt->rchild,le,ri);
	 else
	  return GetJishu(bt->lchild,le,mid)+GetJishu(bt->rchild,mid+1,ri);
}

int GetSum(Node *bt,int le,int ri){
	if(bt->left==le&&bt->right==ri)
		return bt->sum;
	int mid=(bt->left+bt->right)/2;
	if(ri<=mid)
	return GetSum(bt->lchild,le,ri);
	else if(le>mid)
	  return GetSum(bt->rchild,le,ri);
	 else
	  return GetSum(bt->lchild,le,mid)+GetSum(bt->rchild,mid+1,ri);
}


Node* Init(int le,int ri){
	Node *bt=(Node*)malloc(sizeof(Node));
	if(le==ri){
		bt->lchild=NULL;
	     bt->rchild=NULL;
		if(num[le]%2==0)
		bt->jishu=0;
		else
		bt->jishu=1;
		bt->add=0;
		bt->va=num[le];
		bt->sum=num[le];
		bt->left=le;
	    bt->right=ri;
	    return bt;
	}	
		int mid=(le+ri)/2;
		bt->left=le;
		bt->right=ri;
		bt->va=0;
		bt->add=0;
	 bt->lchild=Init(le,mid);
	 bt->rchild=Init(mid+1,ri);		 
	  bt->jishu=bt->lchild->jishu +  bt->rchild->jishu;
	  bt->sum=bt->lchild->sum  +   bt->rchild->sum;
	return bt;
}
*/

//还是超时
/* 
#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;
struct Node{
	int sum,jishu,va;
	int left,right;
	Node *lchild;
	Node *rchild; 
};
const int N=10005+5;
int num[N]; 
void Add(Node *bt,int le,int ri,int value);
int GetJishu(Node *bt,int le,int ri);
int GetSum(Node *bt,int le,int ri);
Node* Init(int le,int ri);
int main(){	
	int n,m,i;
	char s;
	int a,b,c;
	while(scanf("%d%d",&n,&m)==2){
		for(i=1;i<=n;i++)
			scanf("%d",&num[i]);
			Node* node=Init(1,n);	
			for(i=0;i<m;i++){
				  cin>>s;
				if(s=='A'){
					scanf("%d%d%d",&a,&b,&c);
					Add(node,a,b,c);
				}
				else if(s=='S'){
					scanf("%d%d",&a,&b);
					printf("%d\n",GetSum(node,a,b));
				}
				else if(s=='Q'){
					scanf("%d%d",&a,&b);
						printf("%d\n",GetJishu(node,a,b));
				}
				
			}
	}
	return 0;
}
void Add(Node *bt,int le,int ri,int value){
	if(bt->left==bt->right){
		bt->va+=value;
		bt->sum+=value;
		if(bt->va%2==0)
		 bt->jishu=0;
		 else
		 bt->jishu=1;
		return;
	}
	int mid=(bt->left+bt->right)/2;
	if(ri<=mid)
	  Add(bt->lchild,le,ri,value);
	  else if(le>mid)
	   Add(bt->rchild,le,ri,value);
	   else
	   {
	   	Add(bt->lchild,le,mid,value);
	   	Add(bt->rchild,mid+1,ri,value);
	   }
	bt->jishu=bt->lchild->jishu+bt->rchild->jishu;
	bt->sum=bt->lchild->sum+bt->rchild->sum;
}

int GetJishu(Node *bt,int le,int ri){
	if(bt->left==le&&bt->right==ri)
		return bt->jishu;
	int mid=(bt->left+bt->right)/2;
	if(ri<=mid)
	return GetJishu(bt->lchild,le,ri);
	else if(le>mid)
	  return GetJishu(bt->rchild,le,ri);
	 else
	  return GetJishu(bt->lchild,le,mid)+GetJishu(bt->rchild,mid+1,ri);
}

int GetSum(Node *bt,int le,int ri){
	if(bt->left==le&&bt->right==ri)
		return bt->sum;
	int mid=(bt->left+bt->right)/2;
	if(ri<=mid)
	return GetSum(bt->lchild,le,ri);
	else if(le>mid)
	  return GetSum(bt->rchild,le,ri);
	 else
	  return GetSum(bt->lchild,le,mid)+GetSum(bt->rchild,mid+1,ri);
}


Node* Init(int le,int ri){
	Node *bt=(Node*)malloc(sizeof(Node));
	if(le==ri){
		bt->lchild=NULL;
	     bt->rchild=NULL;
		if(num[le]%2==0)
		bt->jishu=0;
		else
		bt->jishu=1;
			
		bt->va=num[le];
		bt->sum=num[le];
		bt->left=le;
	    bt->right=ri;
	    return bt;
	}	
		int mid=(le+ri)/2;
		bt->left=le;
		bt->right=ri;
		bt->va=0;
	 bt->lchild=Init(le,mid);
	 bt->rchild=Init(mid+1,ri);		 
	  bt->jishu=bt->lchild->jishu +  bt->rchild->jishu;
	  bt->sum=bt->lchild->sum  +   bt->rchild->sum;
	return bt;
}
*/










/*超时没优化代码 
#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;
struct Node{
	int sum,jishu,va;
	int left,right;
	Node *lchild;
	Node *rchild; 
};
void Add(Node *bt,int le,int ri,int value);
int GetJishu(Node *bt,int le,int ri);
int GetSum(Node *bt,int le,int ri);
void insert(Node *bt,int point,int value);
Node* Init(int le,int ri);
int main(){	
	int n,m,i,tmp;
	char s;
	int a,b,c;
	while(scanf("%d%d",&n,&m)==2){
		Node* node=Init(1,n);
		for(i=1;i<=n;i++){
			scanf("%d",&tmp);
			insert(node,i,tmp);
		}
			for(i=0;i<m;i++){
					scanf("%s",&s);
				if(s=='A'){
					scanf("%d%d%d",&a,&b,&c);
					Add(node,a,b,c);
				}
				else if(s=='S'){
					scanf("%d%d",&a,&b);
					printf("%d\n",GetSum(node,a,b));
				}
				else if(s=='Q'){
					scanf("%d%d",&a,&b);
						printf("%d\n",GetJishu(node,a,b));
				}
				
			}
	}
	return 0;
}
void Add(Node *bt,int le,int ri,int value){
	if(bt->left==bt->right){
		bt->va+=value;
		bt->sum+=value;
		if(bt->va%2==0)
		 bt->jishu=0;
		 else
		 bt->jishu=1;
		return;
	}
	int mid=(bt->left+bt->right)/2;
	if(ri<=mid)
	  Add(bt->lchild,le,ri,value);
	  else if(le>mid)
	   Add(bt->rchild,le,ri,value);
	   else
	   {
	   	Add(bt->lchild,le,mid,value);
	   	Add(bt->rchild,mid+1,ri,value);
	   }
	bt->jishu=bt->lchild->jishu+bt->rchild->jishu;
	bt->sum=bt->lchild->sum+bt->rchild->sum;
}

int GetJishu(Node *bt,int le,int ri){
	if(bt->left==le&&bt->right==ri)
		return bt->jishu;
	int mid=(bt->left+bt->right)/2;
	if(ri<=mid)
	return GetJishu(bt->lchild,le,ri);
	else if(le>mid)
	  return GetJishu(bt->rchild,le,ri);
	 else
	  return GetJishu(bt->lchild,le,mid)+GetJishu(bt->rchild,mid+1,ri);
}

int GetSum(Node *bt,int le,int ri){
	if(bt->left==le&&bt->right==ri)
		return bt->sum;
	int mid=(bt->left+bt->right)/2;
	if(ri<=mid)
	return GetSum(bt->lchild,le,ri);
	else if(le>mid)
	  return GetSum(bt->rchild,le,ri);
	 else
	  return GetSum(bt->lchild,le,mid)+GetSum(bt->rchild,mid+1,ri);
}

void insert(Node *bt,int point,int value){
	if(bt->left==point&&bt->right==point){
		if(value%2==0)
    	bt->jishu=0;
    	else
    	 bt->jishu=1;
	  bt->sum=value;
	  bt->va=value;
	  bt->left=point;
      bt->right=point;
	  return ;
	}
	 int mid=(bt->left+bt->right)/2;
	 if(point<=mid)
	  insert(bt->lchild,point,value);
	else
	  insert(bt->rchild,point,value);
	  bt->jishu=bt->lchild->jishu+bt->rchild->jishu;
	  bt->sum=bt->lchild->sum+bt->rchild->sum;
}

Node* Init(int le,int ri){
	Node *bt=(Node*)malloc(sizeof(Node));
	bt->jishu=0;
	bt->sum=0;
	bt->va=0;
	bt->left=le;
	bt->right=ri;
	bt->lchild=NULL;
	bt->rchild=NULL;	
	if(le!=ri)  {
		int mid=(le+ri)/2;
	bt->lchild=Init(le,mid);
	bt->rchild=Init(mid+1,ri);
	}	  
	return bt;
}
*/
