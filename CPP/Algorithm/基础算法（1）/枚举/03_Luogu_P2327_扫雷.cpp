#include <iostream>
using namespace std;
const int N = 1e6;
int n;
int a[N],b[N];
int plan1()
{
    a[1] = 1;
    //因为要看 n+1 的格子的地雷是否合法来判断地雷排布是否合法
    for(int i = 2;i<=n+1;i++)
    { 
        a[i] = b[i-1]-a[i-1]-a[i-2];
        if(a[i] != 1 && a[i] != 0)
        {
            return 0;
        }
    }
    if(a[n+1] == 0) return 1;
    else return 0;
}
int plan2()
{
    a[1] = 0;
    for(int i = 2;i<=n+1;i++)
    { 
        a[i] = b[i-1]-a[i-1]-a[i-2];
        if(a[i] != 1 && a[i] != 0)
        {
            return 0;
        }
    }
    if(a[n+1] == 0) return 1;
    else return 0;
}
int main()
{
    cin >> n;
    for(int i = 1;i<=n;i++)
    {
        cin >> b[i];
    }
    int ret = 0;
    ret += plan1();
    ret += plan2();

    cout << ret << endl;
    return 0;
}