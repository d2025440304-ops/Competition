//先进先出
//一边只能进，一边只能出
#include <iostream>
#include <algorithm>
using namespace std;
const int N = 1e5+10;
int q[N];
int h,t;
//h       t
//队头     队尾
void push(int x)
{
    q[++t] = x;
}
//返回队头元素
int front()
{
    return q[h+1];
}
//返回队尾元素
int back()
{
    return q[t];
}
//判断是否为空
bool empty()
{
    return h==t;
}
//删除队头元素
void pop()
{
    h++;
}
//返回队列中的元素个数
int size()
{
    return h-t;
}
int main()
{
    for(int i = 1;i<=10;i++)
    {
        push(i);
    }
    while(!empty())
    {
        cout << front << " " << back << endl;
        pop();
    }
    return 0;
}