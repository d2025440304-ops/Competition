#include <iostream>
#include <queue>
using namespace std;
const int N = 1e5+10;
typedef pair<int,int> PII;//存两个数据，一个时间，一个国家
queue<PII> q;
int cnt[N];//第 i 个国家有多少个人
int kinds;//有多少个国家种类
int n;
int main()
{
    cin >> n;
    while(n--)
    {
        int t,k;    cin>>t>>k;
        for(int i = 1;i<=k;i++)
        {
            int x;  cin>>x;
            q.push({t,x});
            if(cnt[x]++ == 0)     kinds++;//cnt[x]=1;
        }
        while(q.size() && q.back().first-q.front().first >= 86400)
        {
            PII tmp = q.front();  q.pop();
            int x = tmp.second;
            if(cnt[x]-- == 1) kinds--;
        }
        cout << kinds << endl;
    }
    return 0;
}