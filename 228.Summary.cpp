class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
      
       vector<string> result;
       
       if(nums.size()<1) return result;                   
       
       for(int i=0;i<nums.size();i++)
       {
          
          int j=i;
          while(j+1<nums.size()&&nums[j]+1==nums[j+1])j++;            //循环找到一段连续数最后一位
          if(i==j)                                                    //若为单独的数字，转换并赋给result
             {   string a;
                 char t[10];
                 sprintf(t,"%d",nums[i]);
                 result.push_back(t);
             }
          else                                                       //若有连续数，则把开始的与结束的转换并连接赋给result
             {   string a;
                 char t[10];
                 sprintf(t,"%d",nums[i]);
                 a=t;
                 a=a+"->";
                 sprintf(t,"%d",nums[j]);
                 a=a+t;
                 result.push_back(a);
             }
             i=j;
       }
       return result;
    }
};