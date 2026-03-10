#include <iostream>
#include <deque>
using namespace std;
struct node
{
    int x,y,z;
};

int main()
{
    deque<node> dq;
    //头插
    for(int i = 1;i<=10;i++)
    {
        dq.push_front({i,i*2,i*5});//插入结构体的方法就是用大括号
    }
    while(!dq.empty())
    {
        auto x = dq.front();    dq.pop_front();
        cout << x.x << " " << x.y << " " << x.z;
    }
    //尾插

    //尾删

    //头删

    return 0;
}