class Solution {
public:
    double Power(double base, int exponent) {
        double bases = base ;
        bool pos = true ;
        if (exponent < 0)
        {
            pos = false ;
            exponent = -exponent ;
        }
        double ans = 1.0 ;
        for (int i = 1; exponent; ++i)
        {
            if (exponent & 1)
                ans *= bases ;
            bases *= bases ;
            exponent >>= 1 ;
        }
        return pos? ans: 1.0/ans ;
    }
};