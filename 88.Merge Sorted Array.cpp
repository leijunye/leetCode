class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
      if(m!=0) 
      {   
        for(int j=nums1.size();j>m;j--)       //删除NUMS1中在m位置后面的数
             nums1.pop_back();
        for(int i=0;i<n;i++)                  //将NUMS22的元素逐个赋给NUMS1
          nums1.push_back(nums2[i]);           
        sort(nums1.begin(),nums1.end());      //对NUMS1进行排序
      }
      else{
          nums1=nums2;                         //若m等于0，则NUMS1为空，直接把nums2赋给nums1
      }
    }
};