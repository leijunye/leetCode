class Solution {  
public:  
    string convert(string s, int numRows)  
    {  
        if(numRows <= 1 || s.size() < 3 || s.size()<= numRows) return s;  
        string s2;  
        int k = numRows*2 - 2;  
        for (int i = 0; i < numRows; i++)  
        {  
            for (int j = i; j < s.length(); j+=k)  
            {  
                s2.push_back(s[j]);  
                if (i != 0 && i != numRows-1 && k+j-2*i<s.length())  
                {  
                    s2.push_back(s[k+j-2*i]);  
                }  
            }  
        }  
        return s2;  
    }  
};  