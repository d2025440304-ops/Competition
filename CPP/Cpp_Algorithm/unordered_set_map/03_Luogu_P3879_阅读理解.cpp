#include <iostream>
#include <set>
#include <unordered_map>
using namespace std;
int main()
{
    ios::sync_with_stdio(false); cin.tie(0);
    unordered_map<string,set<int>> mp;
    int n; cin >> n;
    for(int i  = 1;i<=n;i++)
    {
        int l ;cin >> l;
        while(l--)
        {
            string s; cin >> s;
            mp[s].insert(i);
        }
    }
    int m; cin >> m;
    while(m--)
    {
        string s; cin >>s;
        //将含有 s 的单词出现的文章在 set 里输出
        for(auto t : mp[s])
        {
            cout << t << " ";
        }
        cout << endl;
    }
    return 0;
}