#include <iostream>
#include <string>
#include <map>
using namespace std;
//绑定高级词汇与含金量
map <string,int> mp;
typedef long long LL;
int n,p;

bool check(char ch)
{
    if((ch >= '0' && ch <= '9') || (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <='Z'))
    {
        return true ;
    }
    else return false;
}
int main()
{
    cin >> n >> p;
    //输入高级词汇
    for(int i  =1;i<=n;i++)
    {
        string s; int x;
        cin >> s >> x;
        //在红黑树里插入s，并绑定 x 含金量
        mp[s] = x;
    }
    //作文
    char ch;
    LL ret = 0;
    string t = "";
    while(scanf("%c",&ch) != EOF)
    {
        if(check(ch)) t += ch;
        else{
            //遇到分隔符了
            ret = (ret + mp[t])%p;
            t = "";
        }
    }
    cout << ret << endl;
    return 0;
}