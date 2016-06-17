class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0,j=height.size()-1;
        int a=0,area;
        while(i<j)
        {
            area=(j-i)*min(height[i],height[j]);
            if(a<area)a=area;
            if(height[i]<height[j])i++;
            else j--;
        }
        return a;
    }
};