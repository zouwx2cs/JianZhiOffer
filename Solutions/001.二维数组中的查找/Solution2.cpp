//运行时间：10ms
//占用内存：1376k
class Solution {
private:
    bool FindInLine(int target, vector<int> &v, int left, int right)
    {
        int &l = left, &r = right ;
        if (l >= r)
            return false ;
        
        const int mid = (r+l)>>1 ;
        const int midValue = v.at(mid) ;
        if (target < midValue)
            r = mid ;
        else if (target > midValue)
            l = mid+1 ;
        else
            return true ;
        
        return FindInLine(target, v, l, r) ;
    }
    
public:
    bool Find(int target, vector<vector<int> > array) {
        for (auto v: array)
            if (FindInLine(target, v, 0, v.size())) 
                return true ;
        return false ;
    }
};