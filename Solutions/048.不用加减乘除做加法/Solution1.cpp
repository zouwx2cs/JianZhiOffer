class Solution {
public:
    int Add(int num1, int num2)
    {
        if (0 == num2)
            return num1 ;
        return Add(num1^num2, (num1&num2)<<1) ;
    }
};