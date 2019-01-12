// 运行时间：3ms
// 占用内存：480k
class Solution {
public:
    int jumpFloor(int number) {
        vector<int> v = {1, 2, 3, 5, 8, 13} ;
        if (number > v.size())
            for (int i = v.size(); i < number; ++i)
                v.push_back(v[i-2] + v[i-1]) ;
        return v[number-1] ;
    }
};
