//算法思想：本题属于模拟题，需要仔细检查输入与输出，并分类讨论细节
//边输入边处理，输入一个数
//一个多项式由三部分组成 正负号 系数 次数
//当这个数是最高次项的系数时，不输出正号,但要输出负号，除此之外都输出正负号
//当这个数字是 1 的时候，不输出系数，当这个数字是 0 时，什么都不输出，当这个数字是非 0 非 1 的时候，直接输出
//当这个数字是0 的时候，不输出次数，当这个数字是1 次项时，只输出 x，当这个数是其他时，输出 x 加次数
#include <iostream>
using namespace std;
int n;
int main()
{
    cin >> n;
    for(int i = n;i>=0;i--)
    {
        int a; cin >> a;
        //正负号
        if(a == 0) continue;
        if(a < 0) cout << '-';
        else if(i != n) cout <<'+';
        //数字
        a = abs(a);
        if(a!=1 || (a==1 && i == 0))    cout << a;
        //系数
        if(i == 0) continue;
        else if(i == 1) cout <<'x';
        else  cout << "x^" << i;
    }
    return 0;
}