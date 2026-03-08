//括号的匹配
//用栈的结构来解决这个问题
//当元素是左括号时，就进栈，当元素是右括号时，就拿出栈顶的左括号来匹配，如果匹配就出栈，继续找右括号匹配，
//最后检查栈是否为空，如果为空，就返回 false
#include <stack>
class Solution 
{
public:
    bool isValid(string s) 
    {
        stack<char> a;
        for(auto ch : s)
        {
            if(ch == "(" || çh == "{" || ch == "[")
            {
                a.push(ch);
            }else{
                if(a.empty())   return ;
                char left = a.top();
                if(left != "{" && ch == "}")   return false;
                if(left != "(" && ch == ")")   return false;
                if(left != "[" && ch == "]")   return false;

                a.pop();
            }
        }

        return a.empty();
    }
};