//算法思想：最暴力的枚举,直接枚举两个数之间的所有数字，然后判断是否回文，是否合法
//枚举年份，枚举两个数字之间的所有年份，然后输出对应的回文月份，再看是否合法、
//枚举月日，一年只有 12 个月，天数是一定的，所以当月数确定时，回文的年份也是确定的，通过年份判断是否合法
#include <iostream>
using namespace std;
//月表
int day[] = {0,31,29,31,30,31,30,31,31,31,30,31,30,31};
int main()
{
    int date1,date2;    cin >> date1>>date2;
    int ret = 0;
    //枚举每一个月的每一天
    for(int i = 1;i<=12;i++)
    {
        //利用 day 表来控制对应月数的天数
        for(int j = 1;j<=day[i];j++)
        {
            int k = (j%10*1000)+(j/10*100)+(i%10*10)+(i/10);
            int sum = k*10000+i*100+j;
            if(sum <= date2 && sum >= date1)
            {
                ret++;
            }
        } 
    }
    cout << ret << endl;
    return 0;
}