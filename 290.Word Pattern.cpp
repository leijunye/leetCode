class Solution {
public:
    bool wordPattern(string pattern, string str) {
        map<string,char>  patternTable;
        map<char,string>  wordTable;                           //定义两个hash表相反的存放pattern,str
        int k=1;                                               //定义int型的k记录str中单词的个数
        for(int i=0;i<str.size();i++){if(str[i]==' ')k++;}     //数空格得到str单词的个数
        istringstream is(str);                                 //用istringstream以空格为分隔符分割str的每一个单词                         
        string os[k];  
        for(int i=0;i<k;i++)  is>>os[i];                       //把每个单词赋给os数组
        
        if(k!=pattern.size())return false;                     //str中单词个数不等于pattern的个数则返回假
        
         
        for(int j=0;j<pattern.size();j++)
         {   if(patternTable.count(os[j])==0&&wordTable.count(pattern[j])==0)//判断patternTable和wordTable中key出现的次数是否为0
              {
                  patternTable[os[j]]=pattern[j];                            //若为0则赋值
                  wordTable[pattern[j]]=os[j];
              }
             else
             {
                 if(patternTable.count(os[j])!=0&&wordTable.count(pattern[j])!=0)//判断patternTable和wordTable中key出现不为0
                   {
                       if(os[j] == wordTable[pattern[j]] && pattern[j] == patternTable[os[j]]) continue;  
                           //判断patternTable的value值等于pattern和wordTable的value值等于os
                   } 
                  else return false;
             }
         }
          return true;  
    }
};