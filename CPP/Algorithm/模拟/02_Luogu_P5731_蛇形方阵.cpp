//算法思想，用一个方向向量来控制整个的走向
//方向向量用两个数组来实现，简历一个二维坐标轴，来靠一个方向控制走向输出
#include <iostream>
using namespace std;
const int N = 19;
//方向向量，用来控制蛇的走向
int dx[] = {0,1,0,-1};
int dy[] = {1,0,-1,0};
int n;
int arr[N][N] = {0};
int main()
{
    cin >> n;
    int pos = 0;
    int cnt = 1;
    int x = 1, y = 1;
    while(cnt<=n*n)
    {
        arr[x][y] = cnt++;
        //下一步要走的位置,预判下一步走的位置是否合法，合法就填，不合法就转向
        int nx = x+dx[pos],ny = y+dy[pos];
        if(nx > n || ny >n ||nx <1 || ny <1 || arr[nx][ny]!=0)
        {
            //转向
            pos = (pos+1)%4;//循环
            nx = x+dx[pos]; ny= y+dy[pos];
        }
        //填下一个位置
        x = nx; y = ny;
    }
    for(int i  = 1;i<=n;i++)
    {
        for(int j = 1;j<=n;j++)
        {
            printf("%3d",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}