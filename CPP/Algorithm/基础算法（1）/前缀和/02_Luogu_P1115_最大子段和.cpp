#include <iostream>
using namespace std;
typedef long long LL;
const int N = 1e6+10;
LL f[N];
LL ret = -2e10;
LL prevmin = f[0];
int n;
int main()
{
    cin >> n;
    for(int i = 1;i<=n;i++)
    {
        //构建前缀和数组
        int x; cin >>x;
        f[i] = f[i-1]+x;
    }
    
    //一边扫描前缀和数组的每一个数，一边更新最大的子段和，子段和为f[i]-f[x]，一边更新最小的子串和prevmin_f[x]
    for(int i = 1;i<=n;i++)
    {
        ret = max(ret,f[i]-prevmin);
        prevmin = min(prevmin,f[i]);
    }
    cout  << ret << endl;
    return 0;
}
