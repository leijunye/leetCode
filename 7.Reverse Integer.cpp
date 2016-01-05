class Solution {
public:
    int reverse(int x) {
        bool a=true;                            //记录x是否为负数
        int i=0;                                //定义i来记录x
        if(x<0)                                 //判断x是否为负数，若为负数，取反，并记录下来
        {
            x=-x;
            a=false;
        }
        while(x!=0)                            
        {    if(i!=0&&2147483647/i<10)return 0; //判断i是否越界
              i=i*10+x%10;                      //对x进行翻转并用i记录
             x=x/10;
        }
       if(a)return i;
       else return -i;
    }
};