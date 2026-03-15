//算法思路：因为A，B，C ，自变量 x 都是＞0 的，所以在给定的区间内，所有二次函数都是递增的
//又因为要输出，每个函数从 x=1 开时的函数，从小到大输出，所以可以先计算出x=1 时的所有函数值
//再取最小的，继续计算，再取 x=1 时次小的计算下一个值，一直这样计算，可以优化计算
//核心算法与数据结构：利用小根堆+二次函数特性
#include <queue>
#include <iostream>
using namespace std;
typedef long long LL;

const int N = 1e6+10;

LL a[N],b[N],c[N];

struct node{
    LL f;//函数值
    LL num;//函数编号
    LL x;//自变量值
    //重载比较结构体函数
    bool operator < (const node & x) const {
        return f > x.f;
    }
};
//结构体小根堆
priority_queue<node> pq;

LL calc(LL num ,int x)
{
    return a[num]* x *x +b[num] *x + c[num];
}

int n,m;

int main()
{
    //n 为 n 行，m 为输出前 m 个小的元素
    cin >> n >> m;
    //输入每个函数的 ABC 参数
    for(int i  = 1;i<= n;i++)
    {
        cin >> a[i] >> b[i] >> c[i];
    }
    //计算每个函数 x=1 时的函数值
    for(LL i = 1;i<=n;i++)
    {
        //放入堆中，堆顶元素为最小x=1 的函数值
        pq.push({calc(i,1),i,1});
    }
    while(m--)
    {
        //拿出堆顶元素，并删除
        auto t = pq.top();  pq.pop();
        LL f = t.f,num = t.num,x = t.x;
        cout << f << " ";

        //继续算编号最小函数值的 x+1 自变量函数值
        pq.push({calc(t.num,x+1),num,x+1});
    }
    return 0;
}