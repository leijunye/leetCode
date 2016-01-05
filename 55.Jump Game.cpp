class Solution {
public:
    bool canJump(vector<int>& nums) {
       if(nums.size()==1)return true;               //若NUMS的长度为1则返回真
       int i=0,max=0;                               //定义两个int型变量i,max。max记录最长的跳跃距离,i记录跳的位置
       while(i<=max&&i<nums.size()-1)               
       {
           if(i+nums[i]>max)                        //判断在i的位置上加上nums[i]的跳跃距离是否大于max，大于则相加后赋给max
              max=i+nums[i];
           i++;                                     
       }
       if(max>=nums.size()-1)return true;           //判断最大的跳跃距离能否大于或等于NUMS的长度，若等于则返回真
       else return false;
    }
};