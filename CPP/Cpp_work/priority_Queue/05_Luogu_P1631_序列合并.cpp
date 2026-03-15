//算法思路：利用单调性，因为两个数组都是单调不降的，所以各元素之和也是单调不降的
//我们拿出a[1]和b[i]做和之后放入小根堆，随后输出堆顶，再继续算堆顶中 b 数组的下一个元素做和
//一直重复即可 
#include <iostream>
#include <queue>
using namespace std;
const int N = 1e6+10;
struct node{
    int sum;//和
    int i,j;//a 和 b中元素的编号

    bool operator < (const node & x) const {
        //小根堆，大元素坠落
        return sum > x.sum;
    }
};
priority_queue<node> pq;//小根堆
int a[N],b[N];
int n;
int main()
{
    cin >> n;
    for(int i  = 1;i<=n;i++)    cin >> a[i];
    for(int i  = 1;i <= n;i++)  cin >> b[i];

    //接下来将a[1]和 b[i]的所有元素做和输出

    for(int i = 1;i <= n;i++)
    {
        pq.push({a[1]+b[i],1,i});
    }
    for(int k = 1;k <= n;k++)
    {
        auto t = pq.top();  pq.pop();
        int sum = t.sum,i = t.i,j = t.j;
        cout << sum << " ";

        if(i+1 <= n)
        pq.push({a[i+1]+b[j],i+1,j});
    }
}