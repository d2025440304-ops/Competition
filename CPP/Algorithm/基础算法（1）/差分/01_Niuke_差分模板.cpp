#include <iostream>
using namespace std;
typedef long long LL;
const int N = 1e6+10;
LL a[N];
LL f[N];
int n,m;
int main()
{
    cin >> n >> m;
    for(int i = 1;i<=n;i++)
    {
        cin >> a[i];
        f[i] = a[i]-a[i-1];
    }

    while(m--)
    {
        int l,r,k; cin >> l >> r >> k;
        f[l] += k;
        f[r+1] -= k;
    }

    for(int i = 1;i<=n;i++)
    {
        a[i] = a[i-1]+f[i];
        cout << a[i] << " ";
    }
    return 0;
}
