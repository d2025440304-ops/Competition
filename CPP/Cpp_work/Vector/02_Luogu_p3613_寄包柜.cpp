#include <iostream>
#include <vector>
using namespace std;
const int N = 1e5 + 10;
vector<int> a[N];//创建 N 个 vector,N 个柜子，里有 n 个格子
int n,q;
int main()
{
    cin >> n >> q;
    while(q--)//查询q 次
    {
        int op,i,j,k;
        cin >> op >> i >> j;
        if(op==1)
        {
            cin >> k;
            if(a[i].size() <= j)//第i个柜子的格子够不够
            {
                a[i].resize(j+1);
            }
            a[i][j] = k;//第 i 个柜子的第 j 个格子存放 k
        }else{
            cout << a[i][j] <<endl;//题目中已经保证有存过东西
        }
    }
    return 0;
}


// int mian()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(0);
//     int op,i,j,k;
//     cin >> n >> q;
//     while(q--)
//     {
//         cin >> op >>i >>j;
//         if(op==1)
//         {
//             cin >> k;
//             if(a[i].size() <= j)
//             {
//                 a[i].resize(j+1);
//             }
//             a[i][j] = k;
//         }else{
//             cout << a[i][j] <<endl;
//         }
//     }
//     return 0;
// }