#include <iostream>
#include <algorithm>
using namespace std;
const int N = 1e5+10;
int stk[N];
int n;
void push(int x)
{
    stk[++n] = x;//1开始
}
void pop()
{
    n--;
}
bool empty()
{
    return n== 0;
}
int top()
{
    return stk[n];
}

int size()
{
    return n;
}
int main()
{

} 