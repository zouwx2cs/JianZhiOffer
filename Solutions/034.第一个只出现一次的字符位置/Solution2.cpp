class Solution {
public:
    int FirstNotRepeatingChar(string str) {
        int cnts[128] = {0, } ;
        int posFrist[128] = {0, } ;
        int pos = 0 ;
        
        for (char ch: str)
        {
            if (cnts[ch]++ == 0)
                posFrist[ch] = pos ;
            ++pos ;
        }
        
        int minPos = pos ;
        for (int i = 0; i < 128; ++i)
            if (1 == cnts[i] && posFrist[i] < minPos)
                minPos = posFrist[i] ;
        
        return minPos == pos? -1: minPos ;
    }
};