#include <iostream>
#include <string>
using namespace std;
//创建顺序表
const int N = 1e6+10;
int a[N];//静态足够大的数组
int n;//标记已有元素个数

//打印
void print()
{
    for(int i =1;i <= n ;i++)
    {
        cout << a[i];
    }
    cout << endl << endl;
}
//尾插
void push_back(int x)
{
    a[++n] = x;
}
//头插
void push_front(int x)
{
    //将 1 到 n 的所有元素都往后移一格,从后移动
    for(int i = n; i >= 1; i--)
    {
        a[i+1] = a[i];
    }
    a[1] = x;
    n++;
}
//在某一位置插入
void insert(int p,int x)
{
    //将p,n内的元素往后移一个，从后移动
    for(int i = n;i >= p;i--)
    {
        a[i] = a[i+1];
    }
    a[p] = x;
    n++;
}
//尾删
void pop_back()
{
    n--;
}
//头删
void pop_front()
{
    //将 2，n 的元素向左整体覆盖
    for(int i = 2;i<= n;i++)
    {
        a[i-1] = a[i];
    }
    n--;
}
//指定删除
void erase(int p)
{
    //将 p+1 ，n 的元素向左移动
    for(int i = p+1;i <= n;i++)
    {
        a[i-1] = a[i];
    }
    n--;
}
//查找某个值在顺序表里的位置，按值查找
int find(int x)
{
    for(int i = 1;i<= n;i++)
    {
        if(a[i] == x) return i;
    } 
    return 0;
}
//按位查找
int at(int p)
{
    return a[p];
}
//修改元素
void change(int x ,int p)
{
    a[p] = x;
}
//清空
void clear()
{
    n = 0;
}
int main()
{
    push_back(1);
    push_back(4);
    push_back(7);
    push_back(5);
    push_back(2);
    return 0;
}