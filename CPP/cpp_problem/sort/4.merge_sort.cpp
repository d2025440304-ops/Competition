//归并排序，思想是一开始就将数组划分成两块，然后再递归继续分这两块
//最后将一开始分的两块已经变成有序的数组合并到原数组上
#include <iostream>
using namespace std;
const int N = 1e5+10;
int a [N];
int n;
int tmp[N];

void merge_sort(int left,int right)
{
    //递归的出口
    if(left >= right)   return;
    //找到中间元素
    int mid = (right-left) >> 1;
    merge_sort(left,mid);
    merge_sort(mid+1,right);
    //合并
    int cur1 = left,cur2 = mid+1,cur = left;
    while(cur1 <= mid && cur2 <= right)
    {
        if(a[cur1] > a[cur2])   tmp[cur++] = a[cur2++];
        else tmp[cur++] = a[cur1++];
    }
    while(cur1 <= mid)  tmp[cur++] = a[cur1++];
    while(cur2 <= mid)  tmp[cur++] = a[cur2++];
    for(int i = left;i<= right;i++) a[i] = tmp[i];
}

int main()
{
    cin >> n;
    for(int i = 1;i<= n;i++)    cin >> a[i];

    merge_sort(1,n);

    for(int i = 1;i <= n;i++)   cout << a[i];
    return 0;
}

void merge_sort(int left,int right)
{
    //递归出口
    if(left >= right)   return;
    //中间元素
    int mid = (right-left)>>1;
    //自动排好两个区间
    merge_sort(left,mid);
    merge_sort(mid+1,right);
    //合并有序数组
    int cur1 = left,cur2 = mid+1,cur = left;
    while(cur1 <= mid && cur2 <= right)
    {
        if(a[cur1] > a[cur2])   tmp[left++] = a[cur2++];
        else    tmp[left++] = a[cur1++];
    }
    while(cur1 <= mid)  tmp[cur++] = a[cur1++];
    while(cur2 <= right)    tmp[cur++] = a[cur2++];
    for(int i = left;i <= right;i++)    a[i] = tmp[i];
}




