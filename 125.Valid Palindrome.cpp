class Solution {
public:
    bool isPalindrome(string s) {
      if(s.size()==0||s.size()==1)return true;                      //若s的长度等于0或1返回真
      transform(s.begin(),s.end(),s.begin(),::toupper);             //把s的所有字符变成大写
      int i=0,j=s.size()-1;
      while(i<j)                                                             
      {
         if(s[i]>'Z'||(s[i]<'A'&&s[i]>'9')||s[i]<'0'){i++;continue;} //找到一个A到Z或0到9的字符为止
         if(s[j]>'Z'||(s[j]<'A'&&s[j]>'9')||s[j]<'0'){j--;continue;} //同上
         
          if(s[i]!=s[j])return false;                                //若对应的字符不同则返回假
          else{  i++;j--; }                                          //若相同则继续往中间查找
        
      }
      return true;
    }
};