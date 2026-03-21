//红黑树提供的 STL，都有排序功能
#include <iostream>
#include <string>
#include <map>
using namespace std;


void print(map<string,int> & mp)
{
    for(auto &p : mp)
    {
        cout << p.first << " " << p.second << endl;
    }
}

//统计每一个字符串输入的次数
void Fun()
{
    //前一个是字符串，后一个是字符串出现的次数
    map<string,int> mp;
    string s ;
    for(int i = 1;i<=5;i++)
    {
        cin >> s;
        mp[s]++;//将 s 放进 map 里，并且加加，默认一开始是 0
    }
    print(mp);
}

int main()
{
    Fun();
    // map<string,int> mp;
    // mp.insert({"张三",1});
    // mp.insert({"李四",2});
    // mp.insert({"王五",3});

    // print(mp);

    // //operator重载的[]运算符，可以直接通过 mp 的第一个关键字来找到
    // //具有和数组一样的功能，打印，修改等
    // cout << mp["张三"] << endl;
    // mp["张三"] = 2;
    // cout << mp["张三"] << endl;

    // //注意 operator[]调用map 里不存在的元素时时会先在 map 里插入，再拿出来判断，所以在判断 map 里是否有元素时要小心
    // // if(mp["赵四"] == 4) cout << "yes" <<endl;
    // // else cout << "no" << endl;
    // //此时已经将赵四插入

    // if(mp.count("赵四") && mp["赵四"] == 4) cout << "yes"<< endl;
    // else cout << "no" << endl;

    // //erase 传第一个关键字
    // mp.erase("张三");
    // print(mp);
    // return 0;
}



//统计单词出现的次数
map<string,int> mp;
void fun()
{

}