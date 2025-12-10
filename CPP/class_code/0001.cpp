#include <iostream>
// input ouput stream
//  输入输出流

using namespace std;

// int main() 
// {
//     //cou 输出的类似 printf
//     //cin 输入的类似 scanf
//     // std::cout << "hello world" << std::endl;
//     int i = 0;
//     cin >> i;
//     cout << i << " " << "hi i love u" << endl;
//     cout << "hello world" << endl;
//     return 0;
// }


// int main()
// {
//     //提升 cin，cout 的性能速度；
//     //因为要兼容 C 语言，而且cin 和cout 的绑定，所以会比 scanf 慢
//     //只要舍弃这两个就会让 cin 和cout 变快
//     ios_base ::sync_with_stdio(false);
//     cin.tie(0);
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);
//     int num;
//     cin >> num;
//     cout << "数字是 " << num <<endl;
//     return 0;
// }
// #include <iostream>
// using namespace std;
// int main()
// {
//     for(int i = 1;i<=9;i++)
//     {
//         for(int j = 1;j<i;j++)
//         {
//             cout << i << "*" << j << "= " << i*j ;
//         }
//         cout << endl;
//     }
//     return 0;
// }

// #include <cstdio>
// #include <iostream>
// using namespace std;
// int main()
// {
//     //getchar空格也会读到
//     //如果 getchar 读取失败会返回EOF，就是-1
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);
//     int  ch = getchar();
//     cout << (char)ch << "xxxxx" <<endl;
//     return 0;
// }
