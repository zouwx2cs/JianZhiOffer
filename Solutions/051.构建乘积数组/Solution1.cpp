class Solution {
public:
    vector<int> multiply(const vector<int>& A) {
        vector<int> B(A.size()) ;
        vector<int> ALeft(A.begin(), A.end()) ;
        vector<int> ARight(A.begin(), A.end()) ;
        ARight.push_back(1) ; // 哨兵，ALeft不加哨兵的原因是在头部插入的话移动元素比较耗时O(n)
        for (int i = 0 + 1; i < A.size(); ++i)
            ALeft[i] *= ALeft[i-1] ;
        for (int i = A.size()-2; i >= 0; --i)
            ARight[i] *= ARight[i+1] ;
        for (int i = 0; i < A.size(); ++i)
            B[i] = (i == 0)? ARight[i+1]: ALeft[i-1] * ARight[i+1] ;
        return B ;
    }
};