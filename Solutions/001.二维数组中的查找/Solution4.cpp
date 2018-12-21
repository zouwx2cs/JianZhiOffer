//运行时间（leetcode240）：超出时间限制
class Solution {
public:
    bool Find(int target, vector<vector<int> > array) {
        unordered_set<int> s ;
        for (auto v: array)
            s.insert(v.begin(), v.end()) ;
        return s.find(target) != s.end() ;
    }
} ;