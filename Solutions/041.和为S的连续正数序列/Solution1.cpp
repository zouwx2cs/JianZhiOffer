class Solution {
private:
    inline int InitN(int s)
    {
        int l = 0, r = s+1 ;
        while (l < r)
        {
            const int mid = (l+r) >> 1 ;
            if ((l + mid) * (mid+1-l) > s)
                r = mid ;
            else
                l = mid+1 ;
        }
        return l ;
    }
public:
    vector<vector<int> > FindContinuousSequence(int sum) {
        if (sum < 1)
            return {} ;

        sum <<= 1 ;
        vector<vector<int>> res ;
        for (int n = InitN(sum) ; n > 1; --n)
        {
            if (sum % n == 0)
            {
                int s = sum/n ;
                if ( (s & 1) && !(n & 1) && s/2 >= n/2
                    || !(s & 1) && (n & 1) && s/2 > n/2 )
                {
                    vector<int> v ;
                    int begin = s/2 - n/2 + (s&1) ;
                    int end = s/2 + n/2 ;
                    for (int i = begin; i <= end; ++i)
                        v.push_back(i) ;
                    res.push_back(v) ;
                }
            }
        }
        return res ;
    }
};