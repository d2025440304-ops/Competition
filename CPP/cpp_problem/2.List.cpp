#include <iostream>
#include <list>
using namespace std;
int main()
{
    //创建双向链表
    list<int> lt;
    //尾插
    lt.push_back(0);
    lt.push_back(1);
    lt.push_back(2);
    //头插
    lt.push_front(0);
    //历遍打印
    for(auto e : lt)
    {
        cout << e << "->";
    }
    cout << "NULL" << endl;
    return 0;
}
