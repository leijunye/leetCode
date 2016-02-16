class Solution {
public:
    int majorityElement(vector<int>& nums) {
       int i=nums.size()/2;                      //记录nums一半的长度
       int sum=1;
       sort(nums.begin(),nums.end());            //对nums排序
       if(nums.size()==1)return nums[0];
       for(int j=1;j<nums.size();j++)
       {
           if(nums[j]==nums[j-1])sum++;         //前一个与后一个相同则sum自加
           else sum=1;                          //不同则等于1
           
           if(sum>i)return nums[j];             
       }
       
    }
};