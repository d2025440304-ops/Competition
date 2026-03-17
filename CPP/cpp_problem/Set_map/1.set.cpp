//搜索二叉树    左<根<右
//平衡二叉树    保持平衡因子的在[-1,1]之间的为平衡二叉树，有左旋右旋等功能
//红黑树    左根右 根叶黑 不红红 黑路同
#include <iostream>
#include <set>
using namespace std;
int main()
{
    //set 不会存相同元素多次，只存一次，所以可以去重
    set<int> mp;
    int a[] = {9,8,7,6,5,4,3,2,1};
    //读入 mp，利用范围 for，中序遍历   
    for(auto e : a)//for(类型 变量名 ： 数组名)
    {
        //插入元素
        mp.insert(e);
    }
    for(auto e: mp)
    {
        cout << e << " ";
    }
    //删除元素
    mp.erase(9);
    mp.erase(8);
    //count 元素出现的次数
    if(mp.count(9))     cout << "9" <<endl;
    else cout << "no:9" << endl;
    //lower_bound upper_bound
    //返回一个大于等于 x 的最小的数的迭代器，返回一个大于 x 的最小的数的迭代器
    //迭代器用 auto 接收
    auto x = mp.lower_bound(3);
    auto y = mp.upper_bound(3);
    //打印迭代器里的内容需要解引用
    cout << *x << " " << *y << endl;
    return 0;
}