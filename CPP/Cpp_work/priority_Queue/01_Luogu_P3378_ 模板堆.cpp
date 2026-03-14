#include <iostream>
using namespace std;
int n;
const int N =  1e6+10;
int pq[N];
int i;
//向上调整法
void up(int child)
{
    int parent = child/2;
    while(parent >=1 && pq[child] < pq[parent])
    {
        swap(pq[parent],pq[child]);
        child = parent;
        parent = child /2;
    }
}
//元素
void push(int x)
{
    n++;
    pq[n] = x;
    up(n);
}
int top()
{
    return pq[1];
}
//向下调整算法
void down(int parent)
{
    int child = parent *2;
    while (child <= n)
    {
        if(child+1 <= n && pq[child+1] < pq[child]) child++;
        if(pq[child] > pq[parent])   return ;
        swap(pq[parent],pq[child]);
        parent = child;
        child = parent*2;
    }
    
}
void pop()
{
    swap(pq[1],pq[n]);
    n--;
    down(1);
}
int main()
{
    cin >> i;
    while(i--)
    { 
        int op; cin >> op;
        if(op == 1)
        {
            int x; cin >> x;
            push(x);
        }
        else if(op == 2)
        {
            cout << top() << endl;
        }else{
            pop();
        }
    }
    return 0;
}