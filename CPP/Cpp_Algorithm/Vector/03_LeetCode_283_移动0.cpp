//思路：分块数组，利用双指针法
        //定义一个 cur 和i，i 为扫描指针，遇到非 0 元素，与 cur 的在一个元素进行交换
        //[0,cur] [cur+1,i-1],[i,n-1]
        //首先 cur 的位置在-1，
        //[2,0,3,0,6,5]
     //cur i
     //   cur
     //   cur  i
     //     curi
     //   [2,3,6,5,0]
class Solution {
public:
    void moveZeroes(vector<int> & nums)    {
        for(int cur = -1,i = 0;i<nums.size();i++)
        {
            if(nums[i])//非零元素
            {
                swap(nums[++cur],nums[i]);
            }
        }
    }
};