class Solution 
{
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
            //解法一：开辟辅助数组，依次比较，放在辅助数组里，最后拷贝到 nums1 中
            //开辟辅助数组
            vector<int> tmp;//size ：m+n
            tmp.reserve(m+n);
            //定义三个指针
            int cur = 0, cur1 = 0, cur2 = 0;
            while(cur1 < m && cur2 < n)
            {
                if(nums1[cur1] < nums2[cur2])   tmp.push_back(nums1[cur1++]);
                else tmp.push_back(nums2[cur2++]);
            }
            while(cur1 < m) tmp.push_back(nums1[cur2++]);
            while(cur2 < n) tmp.push_back(nums2[cur1++]);
            for(int i = 0; i < m+n; i++)    nums1[i] = tmp[i];
    }
};


class Solution 
{
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        //解法二：原地用，从后往前，因为从前往后会覆盖，更加麻烦，在 nums1 里定义一个 cur1 在最大元素上，cur 在最大有效容量上，cur2在nums2 的最大元素上
        //进行比较cur1 和 cur2，谁大谁放在 cur 上
        int cur = m+n-1,cur1 = m-1,cur2 = n-1;
        while(cur2 >= 0)//处理每一个元素
        {
            if(cur1 >= 0 && nums1[cur1] > nums2[cur2])   nums1[cur--] = nums1[cur1--];//
            else nums1[cur--] = nums2[cur2--];
        }
};