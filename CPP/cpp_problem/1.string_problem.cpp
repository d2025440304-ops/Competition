// 标题统计
// #include <iostream>
// #include <string>
// #include <cctype>
// using namespace std;
// int main()
// {
//     string s;
//     getline(cin,s);
//     int cnt = 0;
//     //在 C++中，如果 if（）语句后有分号，就表示条件成立什么都不做，编译器会直接进行下一行
//     for(int i = 0;i<s.size();++i)
//     {
//         //因为 getline 的特性，所以读取到换行就结束，并且会丢掉换行
//         if(s[i] != ' ')
//         cnt++;
//     }
//     cout << cnt <<endl;
//     return 0;
// }
//isspace()
//法二
//用cin 读取，只统计 cin 读取的数据
// int main()
// {
//     string s;
//     size_t cnt = 0;1
//     while(cin >> s)
//     {
//         cnt += s.size();
//     }
//     cout << cnt <<endl;
//     return 0;
// }


//剪刀石头布
// #include <iostream>
// #include <string>
// using namespace std;
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);
//     string s1,s2;
//     int n = 0; 
//     cin >> n ;
//     //n次循环
//     while(n--)
//     {
//         cin >> s1>> s2;
//         if(s1 == s2)
//             cout << "Tie" <<endl;
//         else if(s1 == "Rock" && s2 == "Scissors")
//             cout << "Player1"<<endl;
//         else if(s1 == "Scissors" && s2 == "Paper")
//             cout << "Player1"<<endl;
//         else if (s1 == "Paper" && s2 == "Rock")
//             cout << "Player1" <<endl;
//         else 
//             cout <<"Player2" <<endl;
//     }
//     return 0;
// }
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <cctype>
