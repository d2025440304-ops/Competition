#include <bits/stdc++.h>
using namespace std;
const int INF = 1e9+10;
set<int> mp;
typedef long long LL;
int main()
{
    ios::sync_with_stdio(false); cin.tie(0);
    int n; cin >> n;
    mp.insert(INF); mp.insert(-INF);
    while(n--)
    {
        int op,l;
        cin >> op >> l;
        if(op == 1)
        {
            if(mp.count(l) == 1)
            {
                cout << "Already Exist" << endl;
                continue;
            }
            mp.insert(l);
        }
        else if(op == 2)
        {
            if(mp.count(l)) cout << l <<  endl;
            else if(mp.size()==2) cout << "Empty" << endl;
            else{
                auto it = mp.lower_bound(l);
                auto tmp = it;
                tmp--;
                    if(abs(*tmp-l) <=abs(*it-l))
                    {
                        cout << *tmp << endl;
                        mp.erase(*tmp);
                    }
                    else
                    {
                        cout << *it << endl;
                        mp.erase(*it);
                    }
                }
        }
    }
}