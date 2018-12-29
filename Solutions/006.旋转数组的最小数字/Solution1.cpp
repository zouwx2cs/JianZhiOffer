class Solution {
public:
    int minNumberInRotateArray(vector<int> rotateArray) {
        vector<int> &a = rotateArray ;
        if (a.size() == 0)
            return 0 ; 
        if (a.size() == 1)
            return a.at(0) ;
        
        for (int i = 1; i < a.size(); ++i)
        {
            if (a.at(i) < a.at(i-1))
                return a.at(i) ;
        }
        return (a.front()) ;
    }
} ;