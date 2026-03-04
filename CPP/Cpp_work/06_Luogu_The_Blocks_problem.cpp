#include <iostream>
#include <vector>
using namespace std;

const int N = 30;
vector<int> v[N];
typedef pair <int,int> PII;//C++内置的 pair 类型，类似结构体，两个元素，第一个 first，第二个 second
int n;
PII find(int a)
{
    for(int i = 0;i<n;i++)
    {
        for(int j = 0;j<v[i].size();j++)
        {
            if(v[i][j] == a)
            {
                return {i,j};//返回 pair 时，用花括号返回两个值
            }
        }
    }
}

void clean(int x,int y)
{
    for(int i = y+1;i<v[x].size();i++)
    {
        int t = v[x][i];//x,y是坐标，而v[x][y]才是 push 的元素
        v[t].push_back(t);
    }
    v[x].resize(y+1);
}

void move(int x1,int y1,int x2)
{
    for(int i = y1;i < v[x1].size();i++)
    {
        v[x2].push_back(v[x1][i]);//是[x][i]不是 y，因为 i 才在遍历
    }
    v[x1].resize(y1);
}
int main()
{
    cin >> n;
    string op1,op2;
    int a,b;
    for(int i = 0;i < n;i++)
    {
        v[i].push_back(i);
    }
    while(cin >> op1 >> a >> op2 >> b)
    {
        PII pa = find(a);
        PII pb = find(b);
        int x1 = pa.first,y1 = pa.second;
        int x2 = pb.first,y2 = pb.second;
        if(x1 == x2) continue;
        if(op1 == "move")
        {
            clean(x1,y1);
        }
        if(op2 == "onto")
        {
            clean(x2,y2); 
        }
        move(x1,y1,x2);
    }
    for(int i = 0;i < n;i++)
    {
        cout << i << ":";
        for(int j = 0;j < v[i].size();j++)
        {
            cout << " " << v[i][j] ;
        }
        cout << endl;
    }
    return 0;
}