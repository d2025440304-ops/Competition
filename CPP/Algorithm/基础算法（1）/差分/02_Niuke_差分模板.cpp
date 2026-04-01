#include <iostream>
using namespace std;
typedef long long LL;
const int N = 1e6 + 10;
LL f[N];
int n,m;
int main()
{
    cin >> n >> m;
    for(int i = 1;i<=n;i++)
    {
        int x; cin >>x;
        f[i] += x;
        f[i+1] -= x;
    }

    while(m--)
    {
        int l,r,k; cin >> l >> r >> k;
        f[l] += k;
        f[r+1] -= k;
    }

    for(int i = 1;i<=n;i++)
    {
        f[i] = f[i-1] +f[i];
        cout << f[i] << " ";
    }
    return 0;
}