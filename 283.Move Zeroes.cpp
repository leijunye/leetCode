class Solution {
public:
    void moveZeroes(vector<int>& nums) {
      int i=0;
      for(int j=0;j<nums.size();j++)
      {
          if(nums[j]!=0)
          {
              nums[i]=nums[j];             //把所有不为零的数不改变顺序移动到前面
              i++;
          }
      }
      for(;i<nums.size();i++)
      {
          nums[i]=0;                        //把剩下的位置全赋予0
      }
    }
};