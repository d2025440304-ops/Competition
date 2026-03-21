// 思路：先找出原串中已经能够合法匹配的括号对
// 用栈维护尚未匹配的左括号下标
// 遇到左括号就入栈，遇到右括号就尝试与栈顶左括号匹配
// 如果匹配成功，就把这一对位置标记为保留
// 最后再扫描原串：
// 已标记的位置直接加入答案；未标记的位置单独补成一对括号
#include <stack>
#include <iostream>
using namespace std;
const int N = 110;
bool a[N];
int main()
{
    string s;
    stack<int> st;//栈里存的是括号的下标编号
    cin >> s;
    for(int i = 0;i<s.size();i++ )
    {
        char ch = s[i];
        if(ch == '(' || ch == '[')  st.push(i);
        else{
            if(st.empty())  continue;
            int t =st.top();
            char left = s[t];
            if((left == '(' && ch == ')') || (left == '[' && ch ==']'))
            {
                a[i] = a[t] = true;//a[i]
                st.pop();
            }
        }
    }
    //还原
    string ret = "";//string 初始化
    for(int i  = 0;i<s.size();i++)
    {
        char ch = s[i];
        if(a[i])    ret+=s[i];
        else{
            if(ch == '(')
            {
                ret += ch;
                ret += ')';
            }else if(ch == ')'){
                ret += '(';
                ret +=  ch;
            }else if(ch == '['){
                ret += ch;
                ret += ']';
            }else{
                ret += '[';
                ret += ch;
            }
        }
    }
    cout << ret <<endl;
}