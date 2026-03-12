//堆分为大根堆和小根堆
//当一个树节点的所有
//在一个堆里的某一个节点i
// 父节点 i/2;
// 左子节点 i*2;
// 右子节点 i*2+1;
#include <iostream>
using namespace std;
const int N = 1e5+10;
int heap[N];
int n;//有 n 个节点
//上调堆算法
void up(int child)
{
    int parent = child/2;
    while(heap[parent] >=1 && heap[child] >= heap[parent])
    {
        swap(heap[child],heap[parent]);
        child = parent;
        parent = child /2;//更新父节点
    }
}

//下调堆算法
void down(int parent)
{
    int child = parent*2;//左孩子
    while(child <= n)
    {
        if((child+1) <= n && heap[child+1] > heap[child] )   child ++;
        if(heap[parent] > heap[child])  return;
        swap(heap[child],heap[parent]);
        parent = child;
        child = parent*2;
    }
}
//插入元素
void push(int x)
{
    heap[++n] = x;
    up(n);//传的是下标

}
//删除元素
void pop()
{
    swap(heap[1],heap[n]);
    n--;
    down(1);
}
//查询堆顶元素
int top()
{
    return heap[1];
}
//堆的大小
int size()
{
    return n;
}
int main()
{
    return 0;
}