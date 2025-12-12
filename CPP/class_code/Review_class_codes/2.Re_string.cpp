#include <iostream>
#include <string>
using namespace std;
//输入输出性能优化
// ios_base::sync_with_stdio(false);
// cin.tie(0);

//string 和.size()
// int main()
// {
//     string s1;
//     string s2 = "abcdef";
//     string s3("i love you");
//     //         0123456789
//     //string创建的字符串是有下标的，从 0 开始，不再以\0为标志
//     s2 = s3;
//     //在 C++中，字符串可以直接赋值，和拷贝类似；
//     cin >> s1 ;
//     //cin在输入字符串时，遇到空格时，就不再读取了
//     cout << s1 <<s1.size() << s2.size() << s3.size()<<endl;
//     s1.size()就是对s1用size函数
//      return 0;
// }

//getline
// int main()
// {
//     string s1;
//     string s2 = "abcdef";
//     string s3("ok");
//     //对于 getline，会读取所有字符，包括空格，结束标志是换行
//     getline(cin,s1);
//     //第一个参数是标准输入输出，cin,第二个是 string 字符串
//     cout << s1 <<endl;
//     getline(cin,s2,'X');
//     //同时也可以限制读到哪里就不读了，X
//     //第三个参数可以设置 cin 读到哪里，而且不包括这个字符
//     cout << s2 <<endl;
//     return 0;
// }


// 迭代器 iterator
// iterator,类似于指针，返回类型是string::iterator;
// 迭代器的类型是 string::iterator,与指针相似 int * 就是 string::iterator it1 
// 与指针一样，迭代器可以进行加减操作，也可以比较大小，也可以迭代器之间的加减，是之间的元素
// 有.end()     .begin()     第一个是指向字符串第一个的迭代器，第二个是指向最后一个的下一个的迭代器

// int main()
// {

//     string s1 = "i love u";
//     string::iterator it1 = s1.begin();
//     string::iterator it2 = s1.end();
//     //用迭代器来遍历字符串

//     cout << it2-it1 <<endl;
//     //正序

//     for(string::iterator it3 = s1.begin();it3<s1.end();it3++)
//     {
//         cout << *it3<<endl;
//     }

//     //逆序
//     for(string::iterator it = s1.end();it >= s1.begin();it--)
//     {
//         cout << *it << endl;
//     }
//     return 0;

// }

// int main()
// {
//     string s1 = "abcdef";
//     string::iterator it1 = s1.begin();
//     string::iterator it2 = s1.end();
//     it1++;
//     cout << *it1 <<endl;
//     //迭代器类型指针，如果要访问，需要解引用操作符
//     it2--;
//     cout << *it2 <<endl;
//     if(it1 < it2)
//     cout << '<' << endl;
//     else 
//     cout << '>=' << endl;
//     return 0;    
// }

//string 增加一个字符到字符串的末尾push_back;
// int main()
// {
//     string s1 = "abcdef";
//     s1.push_back('x');
//     s1.push_back('x');
//     string s2;
//     s2.push_back('a');
//     s2.push_back('c');
//     cout << s1 <<endl;
//     cout << s2 << endl;
//     return 0;
// }


//string直接进行+=赋值运算
// int main()
// {
//     string s1 = "i love";
//     string s2 = "u";
//     s1 += 'u';
//     s1 += s2;
//     s2 = "i love" +s2;
//     cout << s1 <<endl;
//     cout << s2 <<endl;
//     return 0;
// }

// pop_back；删除字符串末尾的字符
// int main()
// {
//     string s1 = "i love u";
//     //.是对于s1 用 popback 操作
//     s1.pop_back();
//     cout << s1 <<endl;
//     s1.pop_back();
//     cout << s1 <<endl;
//     while(s1.size() >= 1)
//     s1.pop_back();
//     cout << s1 << " "<< s1.size()<<endl;
//     return 0;
// }

//insert字符串插入函数，将一个字符串插入到string 字符串第n 个字符之前
//  insert (size_t ops,string  || const char *str )
// int main()
// {
//     string s2("mtt");
//     string s1 = "i love u";
//     s2 += s1;
//     s1.insert(0,s2);
//     //插入 string 类型的字符串
//     cout << s1 <<endl;
//     cout << s2 <<endl;
//     s1.insert(0,"mtt");
//     //插入 C 语言风格const char *的字符串
//     cout << s1 << endl;
//     s1.insert(0,2,'t');
//     //插入 n 个字符
//     cout << s1 <<endl;
//     return 0;
// }

//find函数，返回第一次出现子串的位置
//string name.find(char * str,size_t ops),要查找的字符串，和从哪个位置开始查找
// int main()
// {
//     string s1 = "hello world";
//     string s2 = "oooooo";
//     size_t n = s1.find(s2,0);
//     if(n == string::npos)
//     cout << "找不到" << endl;
//     else 
//     cout << "找到了是" << n <<endl;
//     cout << string::npos << endl;
//     return 0;
// }
// int main()
// {
//     string s = "hello world hello everyone";
//     size_t n = s.find("word",0,3);
//     cout << s.size() << endl;
//     //指定查找 c 风格的前几个字符， word 的前三个字符
//     cout << n <<endl;
//     n = s.find("everyday",n+1,5);
//     cout << n << endl;
//     size_t x = s.find('o');
//     cout << x <<endl;
//     x = s.find('o',n+1);
//     cout << x << endl;
//     return 0;
// }
// int main()
// {
//     string s1 = "hello world hello everyone";
//     string s2 = "llo";
//     size_t n = s1.find("llo");
//     //查找 C 语言风格的字符串
//     cout << n << endl;
//     n = s1.find(s2,n+1);
//     //查找 string 字符串
//     cout << n <<endl;
//     return 0;
// }

// int main()
// {
//     //string 类型的字符串有很多函数，用这些函数都是名字+点的方式
//     string s1 = "i love";
//     string s2 = "u";
//     //string.size()函数，用来计算 string 类型字符串的长度
//     size_t i = s1.size();
//     cout << i << endl;
//     //string 类型是有下标的，从 0 开始，到最后一个，与 C 语言不同，不再以\0作为结束标志
//     //利用下标和 size 函数，一个字符一个字符的来打印string 字符串
//     for(int x = 0;x<s1.size();x++)
//     {
//         cout << s1[x] << " ";
//     }
//     //字符串拼接，可以直接进行加操作
//     s1 += s2;
//     cout << s1 << endl;
//     s1 = "mtt" + s1;
//     cout << " " << s1 << endl;
//     return 0;
// }
// int main()
// {
//     //读取一整行的字符串，包括空格
//     //getline 函数的标准        istream & getline(istream& is,string& s1)，结束标志是换行
//     //第一个参数是输入流，而 cin 是标准输入流，所以 cin 可以作为 getline 的第一个参数，第二个是 string 类型字符串的名字
//     //函数重载，istream & getline(istream& is,string& s,char delim),getline函数可以自定义限制结束标志
//     string s1 = "i love u";
//     getline(cin,s1);
//     //在 getline 读取的时候，会将字符串视为空字符串来输入
//     cout << s1 << endl;
//     getline(cin,s1,'x');
//     cout << s1 << endl;
//     return 0;
// }


// //迭代器，iterator,类似指针，有很多迭代器，而这是 string的迭代器所以类型是string::iterator
// //.begin()  .end()
// int main()
// {
//     string s1("i love u");
//     string::iterator it1 = s1.begin();
//     string::iterator it2 = s1.end();
//     for(int i = 0;i<s1.size();i++)
//     {
//         //一个一个的打印，通过 string 下标来打印
//         cout << s1[i];
//     }
//     cout << endl;
//     //auto 自识别类型
//     for(auto it  = s1.begin()+2;it < it2-1;it++)
//     {
//         //一个一个的打印，通过 string 的迭代器 iterator 来打印
//         //love
//         cout << *it;
//     }
//     //范围 for
//     for(char ch : s1)
//     {
//         cout << ch;
//     }
//     cout << endl;
//     cout << it2 - it1 <<endl;
//     return 0;
// }

//insert函数的类型重载
// string & insert (size_t pos,string & s)  第一个参数是 string 字符串的下标，第二个是插入的字符串
// string & insert (size_t pos,char* s)
// string & insert (size_t pos,size_t num,char ch)   第一个参数是 string 字符串的下标，第二个是插入的字符，第三个是插入字符的个数

// int main()
// {
//     string s1 = "xxxxxxx";
//     string s2("dxy");
//     cout << s1 <<endl;
//     s1.insert(3,s2);//xxxdxyxxxx
//     cout << s1 <<endl;
//     s2.insert(0,"brave");//bravedxy
//     cout << s2 << endl;
//     s2.insert(0,4,'h');//hhbravedxy
//     cout << s2 <<endl;
//     return 0;
// }

#include <iostream>
#include <cstdio>
#include <string>
using namespace std;
//size_t find(string & s,size_t pos)
//size_t find(string & s,size_t pos)
//size_t find(char * s,size_t pos,size_t n);查找前 n 个字符串仅仅在 C 语言中适用
//size_t find(char s,size_t pos)

// int main()
// {
//     string s1 = "love u";
//     string s2 = "aini";
//     size_t n = s1.find(s2,0);
//     if(n == string::npos)
//     {
//         cout << "找不到哦哦哦哦哦" << endl;
//         //npos是 size_t的最大值，是一个常数，如果返回 npos 就是找不到
//         cout << "string npos的值是:" << string::npos << endl;
//     }
//     else 
//     cout <<"找到了" << endl;
//     return 0;
// }

// int main()
// {
//     string s1 = "i love u";
//     //查找 c 风格的字符串
//     size_t a = s1.find("love");
//     cout << a <<endl;
//     //查找 c 风格的字符串指定位置
//     a = s1.find("u",a+1);
//     cout << a << endl;
//     string s2 = "dxy woaini";
//     //查找 c 风格的字符串指定位置指定长度
//     size_t n = s2.find("aini",0,3);
//     cout << n << endl;
//     //查找字符，指定位置
//     size_t x = s2.find('i',2);
//     cout << x << endl;
//     return 0;
// }


// //substr函数，截取一段 string 的字符串，从指定位置开始截取，截取指定个数的字符串
// //      string substr(size_t pos,size_t len)返回的是 string 类型的字符串，所以用 string 类型的字符串来接受
// int main()
// {
//     string s1 = "i love u,but i control no you";
//     string s2 = "control no you";
//     //用 find函数找到目标字符串的下标
//     size_t n = s1.find(s2,4);
//     cout << n <<endl;
//     //用 substr 函数来截取目标字符串
//     string s3  = s1.substr(n);
//     //直接打印字符串
//     cout << s3 <<endl;
//     //用下标方式打印，一个一个字符打印
//     for(int i = 0;i<s3.size();i++)
//     {
//         cout << s3[i];
//     }
//     cout << endl;
//     //用迭代器打印
//     for(string::iterator it = s3.begin();it < s3.end();++it)
//     {
//         cout << *it ;
//     }
//     cout << endl;
//     return 0;
// }


//字符串的比较，可以直接比较，不用 C 语言的 strcmp 函数来比较,直接用逻辑运算来比较
//比较的是对应字符的 ASIC 码值
// int main()
// {
//     string s1 = "abcdx";
//     string s2 = "xxx";
//     if(s2 > s1)
//     cout << ">" << endl;
//     else 
//     cout << "<=" << endl;
//     return 0;
// }


//stoi  stol 这两函数不是成员函数所以在用时，不用.访问，而是直接传参
//      int stoi(string & s,size_t *pos,size_t num )
//      long stol(string & s ,size_t *pos,size_t num)
//  这个函数会将字符串里第一个无法正确匹配的数字字符之前的数字提取并且转化成 10 进制
//  返回类型是整形，第一个参数是要提取的字符串，第二个是一个指针，函数会返回第一个无法正确匹配的字符的下标位置给这个指针，第三个参数是字符串里的数字进制

// int main()
// {
//     string s = "0x11woaini33";
//     size_t pos = 0;
//     //当不需要第一个无法匹配的字符下标时，也可以直接传一个空指针，NULL 或者 0
//     int n = stoi(s,0,0);
//     //当最后一个参数是 0 时，会自动读取字符串里数字的进制，如果是0 开头的就是八进制，如果是 0x 开头的就是 16进制
//     cout << n <<endl;
//     cout << pos <<endl;
//     return 0;
//}
// int main()
// {
//     string s = "11woaini33";
//     size_t pos = 0;
//     int n = stoi(s,&pos,2);
//     cout << n <<endl;
//     cout << pos <<endl;
//     return 0;
// }
// int main()
// {
//     string s = "11woaini33";
//     size_t pos = 0;
//     int n = stoi(s,&pos);
//     cout << n <<endl;
//     cout << pos <<endl;
//     return 0;
// }


//stof  stod    提取一个字符串里的小数，与整数形式相同，只是没有最后一个参数
//          double stod(string & s,size_t * pos);
// int main()
// {
//     string s = "3.14xx88";
//     size_t pos = 0;
//     double x = stod(s,&pos);
//     cout << x <<endl;
//     cout << pos <<endl;
//     return 0;
// }


//to_string         是讲数字转换成字符串的一个函数
//  string to_string(int n);
// int main()
// {
//     float n  = 3.1415926;
//     string s = "pi is " +to_string(n);
//     cout << s <<endl;
//     for(int i = 0;i<s.size();++i)
//     {
//         cout << s[i];
//     }
//     cout <<endl;
//     for(string::iterator it = s.begin();it < s.end();++it)
//     {
//         cout << *it;
//     }
//     cout <<endl;
//     return 0;
// }