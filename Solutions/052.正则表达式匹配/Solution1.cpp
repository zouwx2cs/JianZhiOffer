class Solution {
private:
    inline bool Equal(char ch1, char ch2)
    {
        return ch1 == ch2 || ch1 == '.' || '.' == ch2 ;
    }
public:
    bool match(char* str, char* pattern)
    {
        char *p = str, *q = pattern ;
        while ('\0' != *p && '\0' != *q)
        {
            if (*(q+1) == '*')
            {
                if (match(p, q+2))  // 不使用通配符
                    return true ;
                while ( *p != '\0' && Equal(*p, *q) )
                    if (match(++p, q))
                        return true ;
                return false ;
            }
            else if ( Equal(*p, *q) )
                ++p, ++q ;
            else
                return false ;
        }
        if ('\0' == *p)
        {
            if ('\0' == *q)
                return true ;
            else if (*(q+1) == '*')
                return match(p, q+2) ;
        }
        return false ;
    }
};
