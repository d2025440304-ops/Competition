//算法思路：最小波动值其实就是在数轴上与 x 最近的一个数的差值，所以要找到大于等于 x 的最小值，或者找到小于等于 x 的最大值，最后累加起来到 ret 就可以了

//新的知识点，在迭代器左右添加一个左右护法，在 lower_bound 会越界时不影响正确的结果
//要在 set里找到小于某一个值的最大值时，可以先调用 lower_bound，再让迭代器减减
#include <iostream>
#include <set>
const int INF = 1e7+10;//无穷大
std::set<int> mp;//存扫描到 i 之前的营业额
int n;
using namespace std;
int main()
{
    ios::sync_with_stdio(false);cin.tie(0);
    cin >> n;
    int ret = 0;
    cin >> ret;//第一天的最小波动值
    mp.insert(ret);
    mp.insert(INF);    mp.insert(-INF);
    for(int i  = 2;i<=n;i++)
    {
        int x; cin >> x;
        auto it = mp.lower_bound(x);
        auto tmp = it;
        tmp--;
        ret += min(abs(*it-x),abs(*tmp-x));//求最小值 min，绝对值函数 abs
        mp.insert(x);//最后在插入，避免将 x 本身判断
    }
    cout << ret << endl;
    return 0;
}