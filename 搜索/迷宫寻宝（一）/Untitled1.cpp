//�Լ����� 
//�ɳ������ û��¼��λ�� ÿ�ζ�Ҫ��ͷ�� ��ʱ Ӧ�ö��� 
#include "stdio.h"
int n,m;
char s[20][20];
int a,b,c,d,e;
bool book[20][20];
int bx,by,ex,ey;
bool ok;
int key[5];
int next[4][2]={{-1,0},{0,1},{1,0},{0,-1}};//�������� 
int main(){	
   void dfs(int x,int y);
	int i,j;
	char fuck[23];
	while(scanf("%d %d",&n,&m)==2){
	
		
		if(n==0&&m==0)
		break;
		
		ok=0;
		
		for(i=0;i<5;i++)
		   key[0]=0;
		
		for(i=0;i<n;i++)
		for(j=0;j<m;j++)
			book[i][j]=0;
			
	     a=0,b=0,c=0,d=0,e=0;
	     
		for(i=0;i<n;i++){
			scanf("%s",fuck);
		for(j=0;j<m;j++){
		     s[i][j]=fuck[j];
		 
		 switch(s[i][j]){
		 	case 'a':a++;break;
		 	case 'b':b++;break;
		 	case 'c':c++;break;
		 	case 'd':d++;break;
		 	case 'e':e++;break;
		 	case 'S':bx=i;by=j;break;
		 	case 'G':ex=i;ey=j;break;
		 }
	}
		  
	}
	  for(i=0;i<5;i++){  //����5�� �����о�û������ N<=5 
	   dfs(bx,by); 
	   if(ok)
	   break; 
}
	   if(ok)
	   printf("YES\n");
	   else
	   printf("NO\n");  	 
	}
	return 0;
}

void dfs(int x,int y){
	if(ok==1)
	return;
	int i;
	switch(s[x][y]){
		case 'a':key[0]++;s[x][y]='.';break;
		case 'b':key[1]++;s[x][y]='.';break;
		case 'c':key[2]++;s[x][y]='.';break;
		case 'd':key[3]++;s[x][y]='.';break;
		case 'e':key[4]++;s[x][y]='.';break;
		case 'G':ok=1;return;
	}
	for(i=0;i<4;i++){
		int ax=x+next[i][0];
		int ay=y+next[i][1];
		if(ax<0||ax>=n||ay<0||ay>=m||book[ax][ay]==1||s[ax][ay]=='X')
		continue;
		 if(s[ax][ay]=='A'&&key[0]!=a)
		continue;
		 if(s[ax][ay]=='B'&&key[1]!=b)
		continue;
		 if(s[ax][ay]=='C'&&key[2]!=c)
		continue;
		if(s[ax][ay]=='D'&&key[3]!=d)
		continue;
		 if(s[ax][ay]=='E'&&key[4]!=e)
		continue;
		book[ax][ay]=1;
		dfs(ax,ay);
		book[ax][ay]=0;
	}
}
 














/*����  Ҫ��¼�ŵ�λ�ã��ҹ�Կ�׾Ϳ��ţ�Ȼ�����ŵ�λ�ÿ�ʼ��������*/ 
/*
#include "stdio.h"
int n,m;
char s[20][20];
int a,b,c,d,e;
bool book[20][20];
int bx,by,ex,ey;
bool ok;
int key[5];
int next[4][2]={{-1,0},{0,1},{1,0},{0,-1}};//�������� 
int main(){	
   void dfs(int x,int y);
   void seconddfs(int x,int y);
	int i,j;
	char fuck[23];
	while(scanf("%d %d",&n,&m)==2){
	
		
		if(n==0&&m==0)
		break;
		
		ok=0;
		
		for(i=0;i<5;i++)
		   key[0]=0;
		
		for(i=0;i<n;i++)
		for(j=0;j<m;j++)
			book[i][j]=0;
			
	     a=0,b=0,c=0,d=0,e=0;
	     
		for(i=0;i<n;i++){
			scanf("%s",fuck);
		for(j=0;j<m;j++){
		     s[i][j]=fuck[j];
		 
		 switch(s[i][j]){
		 	case 'a':a++;break;
		 	case 'b':b++;break;
		 	case 'c':c++;break;
		 	case 'd':d++;break;
		 	case 'e':e++;break;
		 	case 'S':bx=i;by=j;break;
		 	case 'G':ex=i;ey=j;break;
		 }
	}
		  
	}
	 book[bx][by]=1;
	   dfs(bx,by); //��һ�ο����ܲ���һ���Թ�
	    book[bx][by]=0;
	   seconddfs(bx,by);   //����Կ�׺󿴿����ܲ��ܹ� 
	   if(ok)
	   printf("YES\n");
	   else
	   printf("NO\n");  	 
	}
	return 0;
}
void seconddfs(int x,int y){
	if(ok==1)
	return;
	int i;
   if(s[x][y]=='G'){
	   ok=1;
	   return;
	}
	for(i=0;i<4;i++){
		int ax=x+next[i][0];
		int ay=y+next[i][1];
		if(ax<0||ax>=n||ay<0||ay>=m||book[ax][ay]==1||s[ax][ay]=='X')
		continue;
		//||(s[ax][ay]=='A'&&key[0]<1))
		 if(s[ax][ay]=='A'&&key[0]!=a)
		continue;
		 if(s[ax][ay]=='B'&&key[1]!=b)
		continue;
		 if(s[ax][ay]=='C'&&key[2]!=c)
		continue;
		if(s[ax][ay]=='D'&&key[3]!=d)
		continue;
		 if(s[ax][ay]=='E'&&key[4]!=e)
		continue;
		book[ax][ay]=1;
		seconddfs(ax,ay);
		book[ax][ay]=0;
	}
}

void dfs(int x,int y){
	if(ok==1)
	return;
	int i;
	switch(s[x][y]){
		case 'a':key[0]++;s[x][y]='.';break;
		case 'b':key[1]++;s[x][y]='.';break;
		case 'c':key[2]++;s[x][y]='.';break;
		case 'd':key[3]++;s[x][y]='.';break;
		case 'e':key[4]++;s[x][y]='.';break;
		case 'G':ok=1;return;
	}
	for(i=0;i<4;i++){
		int ax=x+next[i][0];
		int ay=y+next[i][1];
		if(ax<0||ax>=n||ay<0||ay>=m||book[ax][ay]==1||s[ax][ay]=='X')
		continue;
		 if(s[ax][ay]=='A'&&key[0]!=a)
		continue;
		 if(s[ax][ay]=='B'&&key[1]!=b)
		continue;
		 if(s[ax][ay]=='C'&&key[2]!=c)
		continue;
		if(s[ax][ay]=='D'&&key[3]!=d)
		continue;
		 if(s[ax][ay]=='E'&&key[4]!=e)
		continue;
		book[ax][ay]=1;
		dfs(ax,ay);
		book[ax][ay]=0;
	}
}
*/
		//�����˷Կ�׻ᵼ�¿��Դӱ�ĵط���Կ��ȥ�����ص����󲻳ɹ�
		//������ý��õ�Կ�ױ��. 
	//	if(s[ax][ay]>='a'&&s[ax][ay]<='e')
	//	  key[s[ax][ay]-'a']--;



/*----------------------------------------------------------------*/
//���ϴ� 
/*
#include <iostream>
#include <cstring>

using namespace std;

struct node
{
    int x;
    int y;
    int num;
}q[5];
char map[25][25];
int maxkeyOfDoor[5];    //�洢��һ�������е�Կ����
int findkeyOfDoor[5];   //�洢�ֽ��Ѿ��ҵ���Կ����
bool flag;

void DFS(int i, int j);
void check();

void DFS(int i, int j)
{
    if(map[i][j] != 'X')
    {
        switch (map[i][j])
        {
            case 'a':
            case 'b':
            case 'c':
            case 'd':
            case 'e':
                ++findkeyOfDoor[map[i][j]-'a'];
                break;
            case 'A':
            case 'B':
            case 'C':
            case 'D':
            case 'E':
                q[map[i][j] - 'A'].x = i;
                q[map[i][j] - 'A'].y = j;
                ++q[map[i][j] - 'A'].num;
                return;
            case 'G':
                flag = true;
                return;
        }
        map[i][j] = 'X';   // ���Ϊ����
        DFS(i-1, j);
        DFS(i+1, j);
        DFS(i, j-1);
        DFS(i, j+1);
        check();
    }
}

void check()
{
    for(int i = 0; i < 5; ++i)
    {
        if(q[i].num)
        {
            if(findkeyOfDoor[i] == maxkeyOfDoor[i])  //˵���򿪸��������Կ���Ѿ�ȫ���ҵ��������Դ���
            {
                map[q[i].x][q[i].y] = 'X';
                DFS(q[i].x-1, q[i].y);
                DFS(q[i].x+1, q[i].y);
                DFS(q[i].x, q[i].y-1);
                DFS(q[i].x, q[i].y+1);
            }
        }
    }
}

int main()
{
    int tx, ty, m, n;
    while(cin >> m >> n && (m || n))
    {
        flag = false;
        memset(maxkeyOfDoor, 0, sizeof(maxkeyOfDoor));
        memset(findkeyOfDoor, 0, sizeof(findkeyOfDoor));
        memset(q, 0, sizeof(q));
        
    //    for(int i = 0; i <= m + 1; ++i)
    //        map[i][0] = map[i][n + 1] = 'X';
    //    for(int i = 0; i <= n + 1; ++i)
    //        map[0][i] = map[m + 1][i] = 'X';  //�������fouѭ�����Է�ֹԽ��
     //
        memset(map, 'X', sizeof(map));  //����дҲ�����ύ
        
        for(int i = 1; i <= m; ++i)
        {
            for(int j = 1; j <= n; ++j)
            {
                cin >> map[i][j];
                if(map[i][j] == 'S')
                {
                    tx = i;
                    ty = j;
                }
                else if(map[i][j] >= 'a' && map[i][j] <= 'e')
                    ++maxkeyOfDoor[map[i][j] - 'a'];
            }
        }
        DFS(tx, ty);
        if(flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
*/



