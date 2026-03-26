#include <iostream>
using namespace std;
const int N =1e6+10;
int a[N],b[N],g[N],k[N];
int x,y;
int n;
int find()
{
    for(int i = n;i>=1;i--)
    {
        if(x <= a[i]+g[i] && y <= b[i]+k[i] && x>=a[i] && y >= b[i])
        {
            return n;         
        }
    }
     return -1;
}
int main()
{
    cin >> n;
    for(int i =1;i<=n;i++)
    {
        cin >> a[i] >> b[i] >> g[i] >> k[i];
    }
    cout << find() << endl;
    return 0;
}