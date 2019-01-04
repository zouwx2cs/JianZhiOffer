class Solution {
public:
    int MoreThanHalfNum_Solution(vector<int> numbers) {
        map<int, int> m ;
        int halfLen = numbers.size() >> 1 ;
        for (int num: numbers)
        {
            if (m.find(num) == m.end())
            {
                m.insert(pair<int, int>(num, 1)) ;
            }
            else
                ++m[num] ;
            
            if (m[num] > halfLen)
                return num ;
        }
        
        return 0 ;
    }
};