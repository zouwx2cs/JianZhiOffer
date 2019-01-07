class Solution {
public:
    bool IsContinuous( vector<int> numbers ) {
        if (numbers.size() == 0)
            return false ;
        
        if (numbers.size() == 1)
            return true ;
        
        sort(numbers.begin(), numbers.end()) ;

        int i = 1 ;
        while (i < numbers.size() && 0 == numbers[i-1])
            ++i ;
        int kingNumber = i-1 ;
        int cnt = 0 ;
        for (; i < numbers.size(); ++i)
        {
            if (numbers[i] == numbers[i-1])
                return false ;
            else if (numbers[i] == numbers[i-1] + 1)
                continue ;
            else if (numbers[i] > numbers[i-1])
            {
                cnt += numbers[i] - numbers[i-1] - 1 ;
                if (cnt > 4)
                    return false ;
            }
            else
                return false ;
        }

        return kingNumber >= cnt ;
    }
};