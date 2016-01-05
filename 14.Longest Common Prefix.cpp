class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size()==0) return "";                  //若str长度为0则直接返回“”       
        string same;                                   //定义string型same变量记录相同的前缀
        int y=strs[0].size();                          //定义int型变量y记录vector内最短的字符串
         for(int i=0;i<strs.size()-1;i++){             //用for循环遍历str
            if(strs[i].size()<y)                       //找到最短的字符串
               y=strs[i].size();                       //把最短字符串长度赋给y
         }
        int j=0;                                     
        while(j<y){
            for(int i=1;i<=strs.size()-1;i++){         //遍历vector内所以字符串
              if(strs[i][j]!=strs[i-1][j])             //对每个字符串的每个字符逐个比较
                 return same;                          //当找到不同的字符则返回相同的前缀
            }
            same=same+strs[0][j];                      //把相同的字符赋给same
           j++;                                        
        }
        return same;
    }
};