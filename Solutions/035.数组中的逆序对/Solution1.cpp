class Solution {
private:
    const unsigned MOD = 1000000007 ;
    unsigned CountLRPairs(vector<int>::iterator start,
                     vector<int>::iterator end)
    {
        if (start + 1 >= end)
            return 0 ;
        if (start + 2 == end)
        {
            if (*start <= *(start+1))
                return 0 ;
            else
            {
                swap(*start, *(start+1)) ;
                return 1 ;
            }
        }
        
        vector<int>::iterator mid = start + ((end-start) >> 1) ;
        vector<int>::iterator pF = start, pB = mid ;
        int cnt = (CountLRPairs(start, mid) + CountLRPairs(mid, end)) % MOD ;
        while (pF != mid)
        {
            while (pB != end && *pF > *pB)
                ++pB ;
            cnt += pB-mid ;
            cnt %= MOD ;
            ++pF ;
        }
        
        vector<int> tmp(start, mid) ;
        pF = tmp.begin() ;
        pB = mid ;
        vector<int>::iterator p = start ;
        while (pF != tmp.end() && pB != end)
        {
            if (*pF <= *pB)
                *p++ = *pF++ ;
            else
                *p++ = *pB++ ;
        }
        while (pF != tmp.end())
            *p++ = *pF++ ;
        while (pB != end)
            *p++ = *pB++ ;
        
        return cnt%MOD ;
    }
public:
    int InversePairs(vector<int> &data) {
        return CountLRPairs(data.begin(), data.end()) ;
    }
};
