#include <iostream>
using namespace std;
const int N = 1e5+10;
int a[N];
int n;
// 2  5 4 6 1 0
void insert_sort()
{
    for(int i =2;i<= n;i++)
    {
        //保存待排序的元素
        int key = a[i];
        int j = i-1;//前一个元素编号
        while(j >= 1 && a[j] > key)//前一个元素比待排元素大，且前一个元素＞=1
        {
            a[j+1] = a[j] ;//将前一个元素前进至 key 位置
            j--;//将 key 继续与之前的元素进行比较
        }
        //因为从 1 开始排序，此时 j+1 为 1
        a[j+1] = key;
    } 
} 
int main()
{
    cin >> n;
    for(int i = 1;i<=n;i++)  cin >> a[i];

    insert_sort();

    for(int i =1;i<=n;i++)  cout << a[i] << " " << endl;
    return 0;
}


void inert_sort()
{
    for(int i = 2;i <= n;i++)
    {
        int key = a[i];
        int j = i-1;
        while(j >= 1 && a[j] > key)
        {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = key;
    }
}