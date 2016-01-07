class Solution {
public:
    vector<int> getRow(int rowIndex) {
       vector<int> b(rowIndex + 1);                    //定义一个有rowIndex+1个空间的向量b
       b[0]=1;                                         //让第一个值等于0
       for(int i=1;i<=rowIndex;i++)                    
         for(int j=i;j>=0;j--)                         
         { 
           if (j == i) b[j]=b[j-1];                    //若b[j]为最后一个位置则等与它前一个的值，为1
           else if (j == 0)                            //若b[j]在第一个位置则等与1
                     b[j] = 1
           else    
                     b[j] = b[j-1] + b[j];            //当b[j]不在两端，则等于b[j-1] + b[j]
         }
    return b;
    }
};