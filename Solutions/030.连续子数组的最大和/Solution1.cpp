class Solution {
public:
    int FindGreatestSumOfSubArray(vector<int> array) {
        vector<int> v(1, 0) ;
        for (int i = 0; i < array.size(); ++i)
            v.push_back(v.back() + array.at(i)) ;
        
        int M = array[0] ;
        for (int i = 0; i < array.size(); ++i)
            for (int j = i + 1; j < v.size(); ++j)
                M = max(M, v[j] - v[i]) ;
        
        return M ;
    }
};