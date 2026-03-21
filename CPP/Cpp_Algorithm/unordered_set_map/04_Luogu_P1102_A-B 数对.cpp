//a-b = c
// a = b+c
//a 和 b 都在 set 里存，所以只需要找 b+c 出现的次数
#include <iostream>
#include <unordered_map>
using namespace std;
typedef long long LL;
LL n,c;
const int N = 2e5+10;
LL a[N];
int main()
{
    cin >> n >> c;
    unordered_map<LL,LL> mp;
    for(int i  =1;i<=n;i++)
    {
        cin >> a[i];
        mp[a[i]]++;
    }
    LL ret = 0;
    for(int i = 1;i<=n;i++)
    {
        //b = a[i]
        //a = a[i]+c
        ret += mp[c+a[i]];
    }
    cout << ret << endl;
    return 0;
}
