class Solution {
public:
    string countAndSay(int n) {
    string a="1";                        //定义string型的a初值为1
    for(int i=1;i<n;i++)                 //用for循环对a执行n次count
    {
      a=count(a);
    }
    return a;
 }
    string count(string q)              //定义一个count函数对字符串进行数数
    {   string p="";          
        int x=0,k=1;                    //定义int型x,k。x用于记录位置，k用于记录相同字符出现的次数
        int j=q.size();                 //定义int型j，记录q的长度
        while(x!=j)                     //用while循环对字符串q进行遍历
        {
         if(x+1<j&&q[x]==q[x+1])        //若后一位的字符等于前一位的字符，则x向后移，k出现次数+1
           { 
              x++;
              k++;
           }
         else                            //若后一位的字符与前一位不相同则进行一下操作
         { char t[256];
           string s;
           sprintf(t, "%d", k);         //把k从int型转成string型
           s = t;
           p.push_back(s[0]);           //把k记录的次数放入字符串p中
           p.push_back(q[x]);           //把前一位的字符放入q中
           x++;                         //x继续往后移动
           k=1;                         //k记录次数重等于1
         }
        }
        return p;
    }
};