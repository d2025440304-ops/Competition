#include <iostream>
#include <unordered_map>
using namespace std;
int main()
{
    int q; cin >> q;
    unordered_map<string,int> mp;
    while(q--)
    {
        string name; 
        int op;cin >>op;
        if(op  == 1)
        {
            int x;
            cin >> name >> x;
            //插入并修改
            mp[name] = x;
            cout << "OK" <<endl;
        }else if(op == 2){
            cin >> name;
            if(mp.count(name))  cout << mp[name] << endl;
            else cout << "Not found" << endl;
        }else if(op == 3){
            cin >> name;
            if(mp.count(name)) 
            {
                mp.erase(name);
                cout << "Deleted successfully" << endl;
            }else cout << "Not found" << endl;
        }else{
            cout << mp.size() << endl;
        }
    }
}