#include <iostream>
#include <queue>
using namespace std;
const int N = 1100;
bool a[N];//验证队列中是否在内存中
queue<int> q;
int main()
{
    int m,n;
    int cnt = 0;
    cin >> m >> n;
    for(int i = 1;i<= n;i++)
    {
        int x; cin >> x;
        if(a[x])    continue;
        q.push(x);
        cnt++;
        a[x] = true;
        if(q.size() > m)
        {
            a[q.front()] =  false;
            q.pop();   
        }
    }
    cout << cnt << endl;
    return 0;
}