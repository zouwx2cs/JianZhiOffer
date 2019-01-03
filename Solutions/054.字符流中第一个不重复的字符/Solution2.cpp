class Solution
{
private:
    int cnts[128] = {0, } ;
    int posFrist[128] = {0, } ;
    int pos = 1 ;
public:
  //Insert one char from stringstream
    void Insert(char ch)
    {
        if (cnts[ch]++ == 0)
            posFrist[ch] = pos ;
        
        ++pos ;
    }
  //return the first appearence once char in current stringstream
    char FirstAppearingOnce()
    {
        int minPos = pos ;
        char frist = '#' ;
        for (int i = 0; i < 128; ++i)
        {
            if (1 == cnts[i] && posFrist[i] < minPos)
            {
                frist = i ;
                minPos = posFrist[i] ;
            }
        }
        
        return frist ;
    }

};