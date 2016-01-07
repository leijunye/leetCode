class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());              //对NUMS进行排序
        for(int i=1;i<nums.size();i++)              //从第二个数字开始遍历
        {                                       
            if(nums[i-1]==nums[i])return true;      //若发现有相邻两个数字相等则返回真
        }
        return false;
    }
};