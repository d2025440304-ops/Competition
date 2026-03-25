//高精度算法的通用思想：由于没有内置类型可以存进数据范围很大的数，所以只能使用高精度算法
//1.先将所有数字使用字符串输入
//2.再将其逆序转进数组里
//3.再用数组来模拟列竖式进行计算

// 技巧：
// 一个数模 10，得到它留在当前位的数
// 一个数除以 10，得到它向下一位的进位
#include <iostream>
using namespace std;
const int N = 1e6+10;
int a[N],b[N],c[N];
int la,lb,lc;
void add(int c[],int a[],int b[])
{
    //填充 lc 次模拟数字在 c 数组里
    for(int i = 0;i<lc;i++)
    {
        c[i] += a[i] + b[i];//+=,因为这个竖式计算，是有三个数累加的，所以要加=，包括自己也要加
        c[i+1] += c[i] / 10;
        c[i] = c[i] % 10;
    }
    //有可能有临界情况
    if(c[lc] != 0)  lc++;
}
int main()
{
    //将数字以字符串的形式输入
    string sa,sb; cin >> sa >> sb;
    la = sa.size(); lb = sb.size(); lc = max(la,lb);
    //将所有的字符串逆序的放进数组里，这里的规律是字符串的首字符下标加数组末尾的下标的值为数组长度-1
    // a:3 2 1           sa:1 2 3
    //   0 1 2              0 1 2
    //   (la-1-i)               i
    for(int i = la-1;i>=0;i--) a[la-1-i] = sa[i]-'0';
    for(int i = lb-1;i>=0;i--) b[lb-1-i] = sb[i]-'0';
    add(c,a,b);//c = a+b
    for(int i  = lc-1;i>=0;i--)   cout << c[i];
    return 0;
}