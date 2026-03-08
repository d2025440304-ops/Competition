#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
// int main()
// {
//     int arr[] = {9,8,7,6,5,4,3,2,1};    
//     int sz = sizeof(arr)/sizeof(arr[0]);
//     sort(arr,arr+sz);//sort 排序，第一个是待排序首元素的迭代器或者指针，第二个是尾元素的下一个元素的地址或者迭代器
//     for(int i = 0;i<sz;i++)
//     {
//         cout << arr[i] << " ";
//     }
//     return 0;
// }
// int main()
// {
//     string s = "gcdwoaini";
//     sort(s.begin(),s.end());//s是容器，有迭代器
//     cout << s <<endl;
//     return 0;
}

// struct Cmp
// {
//     bool operator()(int x,int y)
//     {
//         return x > y//x first, y second,x > y, 降序
//     }
// }cmp;



// int main()
// {
//     int arr[] = {1,2,3,4,5,6,7,8,9};
//     int sz = sizeof(arr)/sizeof(arr[0]);
//     sort(arr,arr+sz,cmp);
//     return 0;
// }

struct S
{
    string name;
    int age;
};
vector <int> a = {3,4,6,2,1,8,7};
bool cmp_by_name(struct S& s1,struct S& s2)
{
    return s1.name < s2.name;//升序
}
int main()
{
    struct S stu[] = {{"zhangsan",20},{"wangwu",18},{"lisi",25}};
    int sz = sizeof(stu)/sizeof(stu[0]);
    sort(stu,stu+sz,cmp_by_name);
    sort(a.begin(),a.end(),greater<int>());//greater<int>()，降序
    for(int i = 0;i<sz;i++)
    {
        cout << stu[i].name << ":" << stu[i].age << endl;
    }
    for(int i = 0;i<a.size();i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}