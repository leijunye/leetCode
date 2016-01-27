class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());     //对NUMS进行排序
         int i;
        for(i=0;i<nums.size();i++)
         if(nums[i]!=i)return i;           //逐个数比较，不同则返回
         
        return i;                          //若都相同则返回最后一个数
    }
};