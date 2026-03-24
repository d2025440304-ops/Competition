#include <iostream>
#include <algorithm>
using namespace std;
string s;
string ret;
int p1,p2,p3,n;
bool isdig(char ch)
{
    return ch >= '0' && ch <= '9';
}
bool islet(char ch)
{
    return ch >= 'a' && ch <= 'z';
}
void add(char left,char right)
{
    string t;
    for(char ch = left+1;ch < right;ch++)
    {
        char tmp = ch;
        //处理 p1
        if(p1 == 2 && islet(tmp)) tmp -= 32;//小写变大写，小写字符 ASCII 码值大于大写字符 32
        else if(p1 == 3) tmp = '*';
        //处理 p2
        for(int i =0;i<p2;i++)
        {
            t += tmp;
        }
    }
    //处理 p3
    if(p3 == 2)  reverse(t.begin(),t.end());
    ret += t;
}
int main()
{
    cin >> p1 >> p2 >> p3 >> s;
    //一个字符一个字符的处理
    n = s.size();
    for(int i = 0;i<n;i++)
    {
        char ch = s[i];
        if(ch != '-' || i == 0 || i == n-1) ret += ch;
        else{
            char left = s[i-1],right = s[i+1];
            if((isdig(left) && isdig(right) && right>left) ||
                (islet(left) && islet(right) && right > left))
                {
                    //合法
                    add(left,right);
                }else{
                    ret += ch;
                }
        }
    }
    cout << ret << endl;
    return 0;
}