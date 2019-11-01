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
