#include <iostream>
using namespace std;
const int N = 1e6+10;
typedef long long LL;
LL a[N];
LL f[N];
int n,m;
int main()
{
    cin >> n >> m;
    for(int i = 1;i<=n;i++) cin >> a[i];
    for(int i = 1;i<=n;i++) f[i] = f[i-1]+a[i];
    while(m--)
    {
        int l,r; cin >> l >> r;
        cout << f[r]-f[l-1] << endl;
    }
    return 0;
}