//运行时间：12ms
//占用内存：1504k
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