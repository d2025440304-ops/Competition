//0 1 2
//依旧数组分块定义一个 i right left
//i是扫描数组的内容，找到三部分需要的元素
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int i = 0,right =nums.size(),left = -1;
        while(i < right)
        {
            if(nums[i] == 0) swap(nums[++left],nums[i++]);//因为前面已经扫描过了，所以直接 i++
            else if(nums[i] == 2) swap(nums[--right],nums[i]);
            else i++
        }
    }
};