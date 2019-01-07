class Solution {
private:
    int binSearch(vector<int> &v, int l, int r, int target)
    {
        while (l < r)
        {
            const int mid = (l+r) >> 1 ;
            if (v[mid] >= target)
                r = mid ;
            else
                l = mid+1 ;
        }
        return l ;
    }
public:
    int GetNumberOfK(vector<int> data ,int k) {
        if (0 == data.size())
            return 0 ;
        int start = binSearch(data, 0, data.size(), k) ;
        if (0 == start && data.at(0) != k)
            return 0 ;
        else
            return binSearch(data, start, data.size(), k+1) - start ; // 这里注意不能是start+1
        // 因为可能是[0, 1, 2, 3, 3, 3, 4, 5], 2
    }
};