//快排优化版
//随机基准+分三块荷兰国旗问题优化，时间复杂度 N*log（N）

//快速排序的思路：找到一个基准元素，将基准元素分块，根据荷兰国旗来优化
//小于基准元素的放在右边，等于基准元素的放在中间，大于基准元素的放在后面

#include <iostream>
#include <ctime>
using namespace std;
const int N = 1e5+10;
int a[N];
int n;

int get_random(int left,int right)
{
    int r = a[rand() % (right-left+1)+left];//获得随机基准
    return r;
}

void quick_sort(int left,int right)
{
    if(left >= right) return ;//递归结束条件
    int p = get_random(left,right);
    int l = left-1,r = right+1,i = left;
    while(i < r)
    {
        if(a[i] < p)    swap(a[++l],a[i++]);
        else if(a[i] > p)   swap(a[--r],a[i]);
        else i++;
    }
    //[0,l] [l+1,r-1] [r,n]
    //此时已经分成三块，只需要对剩下的两部分递归调用就可以了
    quick_sort(left,l);
    quick_sort(r,right);
}
int get_random(int left,int right)
{
    int r = a[rand() % (right-left+1)+left];
    return r;
}
void quick_sort(int left,int right)
{
    if(left >= right)   return ;
    int p = get_random(left,right);
    int l = left-1,i = left,r = right+1;
    while(i < r)
    {
        if(a[i] > p)    swap(a[i],a[--r]);
        else if(a[i] < p)   swap(a[i++],a[++l]);
        else i++;
    }
    quick_sort(left,l);
    quick_sort(r,right);
}   
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    srand(time(0));
    cin >> n;
    for(int i=1;i<=n;i++)   cin >> a[i];
    
    quick_sort(1,n);

    for(int i =1;i<=n;i++)  cout << a[i] << " ";
    return 0;
}






