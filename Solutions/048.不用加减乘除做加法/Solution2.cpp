class Solution {
public:
    int Add(int num1, int num2)
    {
        int num = num1 ;
        num2 && (num = Add(num1^num2, (num1&num2)<<1)) ;
        return num ;
    }
};