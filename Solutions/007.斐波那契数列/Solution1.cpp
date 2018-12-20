// 运行时间：3ms
// 占用内存：504k
class Solution {
private:
    int fibonacci[40] = {0, 1} ;
public:
    Solution() 
    {
        for (int i = 2; i <= 39; ++i)
            fibonacci[i] = fibonacci[i-1] + fibonacci[i-2] ;
    }
    int Fibonacci(int n) {
        return fibonacci[n] ;
    }
};