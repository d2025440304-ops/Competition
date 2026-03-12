#include <iostream>
#include <queue>
using namespace std;
int a[] = {1,2,3,4,5,6,7,8,9};
//less 是小于比较，greater 是大于比较
//在排序 sort 中 sort(v.begin(),v.end(),greater<int>()),为大于比较，从大到小
//sort(v.begin(),v.end(),less<int>())为小于比较，升序
//但在堆里是相反的
void test()
{
    //大根堆
    priority_queue<int> pq1;
    //大根堆
    priority_queue<int,vector<int>,less<int>> pq2;
    //小根堆
    priority_queue<int,vector<int>,greater<int>> pq3;
    for(int i  = 0;i<10;i++)
    {
        pq1.push(a[i]);
        pq2.push(a[i]);
        pq3.push(a[i]);
    }
    cout << "大根堆" << " ";
    while(!pq1.empty())
    {
        cout << pq1.top() << " " ;
        pq1.pop();
    }
    cout << "大根堆" << " ";
    while(!pq2.empty())
    {
        cout << pq2.top() << " ";
        pq2.pop();
    }
    cout << "小根堆" << " ";
    while(!pq3.empty())
    {
        cout << pq3.top() << " ";
        pq3.pop();
    }
}
struct node{
    int x,y,z;

    //operator < 含义是给<重新定义，即是运算符重载
    //&即不复制，直接引用
    //两个 cosnt 皆是语法需求
    

    //与排序相反，排序是升序，所以堆是降序，所以是大根堆
    bool operator < (const node &x) const
    {

        return y < x.y;//以中间的元素作为基准比较结构体大小
    }
};

void test2()
{
    priority_queue<node> pq;
    for(int i = 1;i<= 10;i++)
    {
        pq.push({i+5,i+2,i+1});
    }
    while(!pq.empty())
    {
        node t = pq.top();  pq.pop();
        cout << t.x << " " << t.y << " " << t.z << endl;
    }
}
int main()
{
    test2();
}