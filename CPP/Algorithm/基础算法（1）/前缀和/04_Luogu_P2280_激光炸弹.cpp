#include <iostream>
using namespace std;
const int N = 5010;
typedef long long LL;
LL a[N][N];
LL f[N][N];
int n,m;
int main()
{
    cin >> n >> m;
    
    while(n--)
    {
        int x,y,v; cin >> x >> y >> v;
        x++,y++;
        a[x][y] += v;//因为一个位置可能有多个目标，多个价值
    }

    int p = 5010;
    for(int i = 1;i<=p;i++)
    {
        for(int j = 1;j<=p;j++)
        {
            //构建二维前缀和
            f[i][j] = f[i-1][j] + f[i][j-1] - f[i-1][j-1] + a[i][j];
        }
    }

    LL ret = 0;
    m = min(m,p);
    //需要炸掉最多价值的目标，只需要求二维数组的最大子段和
    //用 m 长度炸数组中的目标，枚举出所有长度为 m 的正方形
    for(int x2 = m;x2<=p;x2++)
    {
        for(int y2 =m;y2<=p;y2++)
        {
            int x1 = x2-m+1;
            int y1 = y2-m+1;
            //计算二维最大子段和
            ret = max(ret,f[x2][y2] - f[x1-1][y2] - f[x2][y1-1] + f[x1-1][y1-1]);
        }
    }
    cout << ret << endl;
    return 0;
}