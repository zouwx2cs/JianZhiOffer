class Solution {
public:
    int GetUglyNumber_Solution(int index) {
        if (index <= 0)
            return 0 ;
        int cnt = 0 ;
        unsigned long long number = 1 ;
        set<unsigned long long> s ;
        s.insert(1) ;
        while (!s.empty())
        {
            int nextNumber = *s.begin() ;
            s.erase(s.begin()) ;
            ++cnt ;
            s.insert(nextNumber << 1) ;
            s.insert(nextNumber * 3) ;
            s.insert(nextNumber * 5) ;
            if (cnt == index)
                return nextNumber ;
        }
        return -1 ;
    }
};