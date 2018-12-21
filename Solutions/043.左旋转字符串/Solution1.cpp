class Solution {
private:
    void Rotate(string::iterator b, string::iterator e)
    {
        for (e-- ; b < e; ++b, --e)
        {
            *b ^= *e ;
            *e ^= *b ;
            *b ^= *e ;
        }
    }
public:
    string LeftRotateString(string str, int n) {
        if (str.size() <= 1)
            return str ;
        
        n %= str.length() ;
        Rotate(str.begin(), str.begin()+n) ;
        Rotate(str.begin()+n, str.end()) ;
        Rotate(str.begin(), str.end()) ;
        
        return str ; 
    }
};