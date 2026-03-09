//后缀表达式的算法思路
//用栈模拟后缀表达式的过程，如果是数字就进栈，如果是表达式，就拿出栈顶的两个元素然后进行操作求值，然后放进栈里

#include <iostream>
#include <stack>
using namespace std;
int main()
{
    stack<int> st;
    char ch;
    int num;
    while(cin>>ch)//一直输入 ch，直到遇见条件退出
    {
        if(ch == '@')   break;
        else if(ch >= '0' && ch <= '9')
        {
            num = num * 10 +ch;//这样可以让多大的数存进一个数里
        }else if(ch == '.')
        {
            st.push(num);
            num = 0;
        }else
        {
            int b = st.top();   st.pop();
            int a = st.top();   st.pop();
            if(ch == '*')       st.push(a*b);
            else if(ch == '-')  st.push(a-b);
            else if(ch == '/')  st.push(a/b);
            else   st.push(a+b);
        }
    }
    cout << st.top() << endl;
    return 0;
}