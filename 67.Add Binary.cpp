class Solution {
public:
    string addBinary(string a, string b) {
      string c;                         //定义string型来记录相机后的新二进制字符串
      char y;                           //定义char型变量y记录每一位相加后的该位的结果
      int x=0,sum=0;                    //定义int型变量x,sum分别记录进位数和相加后的总数
      int i=a.size()-1,j=b.size()-1;            
     
      while(i>=0&&j>=0)
      {
          sum=(a[i]-'0')+(b[j]-'0')+x;
          x=sum/2;
          y=sum%2+'0';
          c=y+c;
           i--;
           j--;
      }
      while(i>=0){
         sum=(a[i]-'0')+x;
         x=sum/2;
         y=sum%2+'0';
         c=y+c;
         i--;
     }
      while(j>=0){
         sum=(b[j]-'0')+x;
         x=sum/2;
         y=sum%2+'0';
         c=y+c;
         j--;
     }
      if (x) c = "1" +c;  
      return c;
    }
};