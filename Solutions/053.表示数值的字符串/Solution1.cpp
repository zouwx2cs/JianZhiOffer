class Solution {
public:
    bool isNumeric(char* string)
    {
        int cntDot = 0 ;
        int cntSigned = 0 ;
        bool cntE = false ;
        
        for (char *ch = string; *ch; ++ch)
        {
            if (*ch == '.')
            {
                ++cntDot ;
                if (cntDot >= 2)
                    return false ;
                if (cntE)
                    return false ;
            }
            else if ('+' == *ch || '-' == *ch)
            {
                if (cntSigned >= 2)
                    return false ;
                ++cntSigned ;
                if (ch != string && *(ch-1) != 'e' && *(ch-1) != 'E')
                    return false ;
            }
            else if ('E' == *ch || 'e' == *ch)
            {
                if (cntE)
                    return false ;
                if (*(ch+1) == '\0')
                    return false ;
                cntE = true ;
            }
            else if (*ch <= '9' && *ch >= '0')
            {
                continue ;
            }
            else
                return false ;
        }
        
        
        return true ;
    }

};