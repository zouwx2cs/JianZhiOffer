class Solution {
public:
    int StrToInt(string str) {
        if ("" == str)
            return 0 ;
        int res = 0 ;
        int sig = 1 ;
        for (int i = 0; i < str.length(); ++i)
        {
            char &ch = str[i] ;
            if (ch == '+' || ch == '-')
            {
                if (i != 0)
                    return 0 ;
                else if (ch == '-')
                    sig = -1 ;
            }
            else if (ch > '9' || ch < '0')
            {
                return 0 ;
            }
            else
            {
                res *= 10 ;
                res += ch - '0' ;
            }
        }
        return sig*res ;
    }
};