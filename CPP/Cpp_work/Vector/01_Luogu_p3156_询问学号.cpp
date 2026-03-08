#include <iostream>
#include <vector>
using namespace std;
//边界大小
const int N = 2e6+10;
//数组容器
vector <int> a(N);
int n,m;//人数和询问次数
int main()
{
    cin >> n >> m;
    for(int i = 1;i <= n;i++) cin>>a[i];
    while(m--)
    {
        int x; cin >> x;
        cout << a[x] << endl;
    }
    return 0;
}