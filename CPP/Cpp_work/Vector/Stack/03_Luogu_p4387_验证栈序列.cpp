//思路，一个栈的元素有很多种出法，通过程序来匹配一个栈的出法是否合理匹配
//操作，先将元素入栈，再看入栈的元素是否是出栈元素，如果是，就出栈，否则就继续下一个元素入栈
#include <stack>
#include <iostream>
using namespace std;
const int N = 1e5+10;
int n;
int a[N];
int b[N];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int q;  cin >> q;
    stack<int> st;
    while(q--)
    {
        for(int i = 1;i<= n;i++)    cin>>a[i];//入栈序列
        for(int i = 1;i<= n;i++)    cin>>b[i];//出栈序列
        int j =1;
        for(int i = 1;i<=n;i++)
        {
            st.push(a[i]);
            while(j <= 5 && st.top()== b[j] &&st.size())
            {
                st.pop();
                j++;//匹配出栈元素
            }
        }
    }
    if(st.size())   cout << "No" << endl;
    else    cout << "Yes" <<endl;
    return 0;
}