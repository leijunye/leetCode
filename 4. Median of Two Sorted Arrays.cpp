class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
     
      nums1.insert(nums1.end(),nums2.begin(),nums2.end());//让NUMS2插入NUMS1
      sort(nums1.begin(),nums1.end());                    //对NUMS1进行排序
     
      int i=nums1.size();                                 //定义一个I等于NUMS1的长度
     
      if(i%2!=0)                                          //判断NUNS1的个数为为奇数个还是偶数个
       return nums1[(i)/2];                               //奇数个取NUMS1的中值
      else
       { double a=nums1[i/2],b=nums1[(i/2)-1];            //偶数个取中间两个值的平均值
         return (a+b)/2;
       }
    }
};