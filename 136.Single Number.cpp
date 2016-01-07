class Solution {
public:
    int singleNumber(vector<int>& nums) {
       int result = nums[0];                      //定义一个int类型的变量result并等于nums的第一个值
       if(nums.size()==1)return result;          //若nums的长度为1则返回result
       for(int i = 1; i < nums.size(); i++)      
        result ^=nums[i];                        //对nums[i]和result进行异或运算    
       return result; 
    }
};