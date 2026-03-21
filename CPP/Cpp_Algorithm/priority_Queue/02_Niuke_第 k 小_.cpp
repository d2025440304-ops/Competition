#include <bits/stdc++.h>
using namespace std;
int n,m,k;
priority_queue<int>    pq;//默认大根堆
int main()
{
    cin >> n >> m >>k;
    for(int i = 0;i<n;i++)
    {
        int x;    cin >> x;
        pq.push(x);
        if(pq.size() > k)    pq.pop();
    }
    
    while(m--)
    {
        int op;    cin >> op;
        if(op == 1)
        {
            int x; cin >> x;
            pq.push(x);
            if(pq.size() > k)    pq.pop();
        }
        else if(op == 2)
        {
            if(pq.size() == k)    cout << pq.top() << endl;
            else cout << -1 <<endl;
        }
    }
    return 0;
}