#include <iostream>
#include <unordered_set>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t ;cin >> t;
    while(t--)
    {
        unordered_set<int> mp;
        int n; cin >>n;
        for(int i = 1;i<=n;i++)
        {
            int x; cin >>x;
            if(mp.count(x) != 1)
            {
                cout << x << " ";
                mp.insert(x);
            }
        }
        cout << endl;
    }
    return 0;
}