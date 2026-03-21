#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
const int N = 23,INF = 0x3f3f3f3f;
int h[N];

//初始化
void Init()
{
    //首元素地址，元素，大小（字节）
    memset(h,0x3f,sizeof h);
}
int Fhash(int x)
{
    int id = (x %N +N)%N;
    while(h[id] != INF && h[id] == x)
    {
        id++;
        if(id == N) id = 0;
    }
    return id;
}
int main()
{   
    
    return 0;
}