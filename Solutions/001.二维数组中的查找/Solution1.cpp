//运行时间（leetcode240）：1248ms
class Solution {
public:
    bool Find(int target, vector<vector<int> > array) {
        for (auto vec: array)
            for (auto v: vec)
                if (v == target)
                    return true ;
        return false ;
    }
};