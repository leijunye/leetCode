class Solution {
public:
    string convertToTitle(int n) {
        string a;
        char b;                      
        int i;      
        while(n)                  
        {  
           i=(n-1)%26;            
           n=(n-1)/26;
	   b=i+65;
           a=b+a;
        }
        return a;
    }
};