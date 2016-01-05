class Solution {
public:
    bool isPalindrome(int x) {
    if(x<0) return false;            //若x小于0，则返回假
    int a=0;                         //记录x的翻转后的值
    int i=x;                         //记录下x的值
    while(x!=0)
        {   a=a*10+x%10;             //使x翻转并赋给a
            x=x/10;
        }
    if(i==a)return true;             //若翻转后相等则返回真
    else return false;
    }
};