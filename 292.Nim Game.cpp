class Solution {
public:
    bool canWinNim(int n) {
        if(n%4==0)return false;        //若当n等于4的倍数时，比赛必输，返回false
        else return true;
    }
};