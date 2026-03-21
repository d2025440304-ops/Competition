//将所有偶数放进堆里，再将堆顶的偶数元素除以 2
#include <iostream>
#include <queue>
using namespace std;
typedef long long  LL;
priority_queue<int> pq;//默认是大根堆
int n,k;
int main()
{
    LL sum = 0;//标记元素的和
    cin >> n >> k;
    for(int i = 0;i<n;i++)
    {
        int x ; cin >> x;
        sum += x;
        if(x %2 == 0)   pq.push(x);
    }

    while(!pq.empty() && k--)
    {
        //取出最大的偶数除以二，再用原来的和减去
        int t = pq.top() /2;
        pq.pop();

        sum -= t;
        if(t %2 == 0)   pq.push(t);
    }
    cout << sum << endl;
    
}