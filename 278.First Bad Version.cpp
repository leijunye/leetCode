// Forward declaration of isBadVersion API.
bool isBadVersion(int version);

class Solution {                                       //用二分查找
public:
    int firstBadVersion(int n) {
        int low=1,high=n,mid;
        while(low<=high)
         {
             mid=(high-low)/2+low;
             if(isBadVersion(mid)) high=mid-1;
             else low=mid+1;
         }
         return low;
    }
};