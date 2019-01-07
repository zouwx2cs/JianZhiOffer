class Solution {
public:
    void FindNumsAppearOnce(vector<int> data,int* num1,int *num2) {
        unsigned xorAll = 0 ;
        for (int in: data)
            xorAll ^= in ;
        unsigned mode = 1 ;
        while (!(xorAll&1))
        {
            mode <<= 1 ;
            xorAll >>= 1 ;
        }
        *num1 = *num2 = 0 ;
        for (int in: data)
        {
            if (in & mode)
                *num1 ^= in ;
            else
                *num2 ^= in ;
        }
    }
};
