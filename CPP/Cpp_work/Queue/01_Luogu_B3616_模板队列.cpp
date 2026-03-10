#include <iostream>
using namespace std;
const int N = 1e5+10;
int q[N],h,t;
int main()
{
    int n;  cin >> n;
    while(n--)
    {
        int op,x;
        cin >> op;
        if(op == 1)
        {
            int x; cin>>x;
            q[++t] = x;
        }else if(op==2){
            if(h == t)  cout << "ERR_CANNOT_POP" << endl;
            else h++;
        }else if(op == 3){
            if(h == t)  cout << "ERR_CANNOT_QUERY" << endl;
            else cout << q[h+1] << endl;
        }else{
            cout << t - h << endl;//h的下一位是有效元素
        }
    }
    return 0;
}