class Solution {
private:
    int count[100000] = {0, 1, 2, 3} ;
    int n = 3 ;
public:
    int rectCover(int number) {
        if (number < n)
            return count[number] ;
        
        for (; n <= number; ++n)
        {
            count[n] = count[n-1] + count[n-2] ;
        }
        return count[number] ;
    }
};