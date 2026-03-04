#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
const int N = 10;
//类
class X {
    public://共用
    vector<int> a;
    string name;
    int age;
};
void print(vector<int> & a)//打印容器引用性能更好，引用是直接调用，而不应用要拷贝，性能低，参数里的容器是泛型的
{
    for(int i = 0;i<a.size();i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}
int main()
{
    vector<int> a1;
    vector<int> a2(N);//创建一个可变长数组，顺序表，大小为 N，默认都是 0
    vector<int> a3(N,10);//每个元素的都是 10
    vector<int> a4 = {1,2,3,4};
    // vector<vector<int>> a4(N);//二维
    // vector<string> a5[N];//创建一个顺序表的数组，每个元素都是 vector 可变长数组，二维 
    // vector<int> a6 ={1,2,3,4,5,6};//初始化形式
    // print(a3);
    // if(a1.empty()) cout << "空的"<< endl;

    //.push_back 和 .pop_back
    for(int i = 0;i<5;i++)
    {
        a1.push_back(i);
        print(a1);
    }
    //.empty不为空的时候
    while(! a1.empty())
    {
        a1.pop_back();
        print(a1);
    }
    //.front , .back 分别是返回首元素和尾元素
    cout << a4.front() << a4.back() << endl;

    //.resize 调整容器大小，如果大了，补0，如果小了，删除
    vector<int> aa(5,1);
    print(aa);
    //扩大成 10
    aa.resize(10);
    // print(aa);
    // //缩小成 3
    // aa.resize(3);
    // print(aa);

    // //.clear 清空容器，容器内部为空，没有元素
    // aa.clear();
    // cout << aa.size() << endl;

    //利用迭代器来 sort
    //升序,从小到大
    sort(aa.begin(),aa.end());
    print(aa);
    //降序，从大到小
    sort(aa.begin(),aa.end(),greater<int>());
    print(aa);
    return 0;
}