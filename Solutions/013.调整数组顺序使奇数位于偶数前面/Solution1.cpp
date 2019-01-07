class Solution {
private:
    inline bool IsEven(int n)
    {
        return !(n & 1) ;
    }
public:
    void reOrderArray(vector<int> &array) {
        if (array.size() < 2)
            return ;
        array.push_back(0) ; // ÉÚ±ø
        for (int i = array.size()-2; i >= 0; --i)
        {
            if ( IsEven(array[i]) && !IsEven(array[i+1]) )
                for (int j = i+1; !IsEven(array[j]); ++j)
                    swap(array[j-1], array[j]) ;
        }
        array.pop_back() ; // É¾³ýÉÚ±ø
    }
};