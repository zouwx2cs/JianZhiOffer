class Solution {
private:
    int fun(int n, int m)
    {
        if (n == 1)
            return 0 ;
        
        return (fun(n-1, m) + m % n) % n ;
    }
public:
    int LastRemaining_Solution(int n, int m)
    {
        if (0 == n)
            return -1 ;
        return fun(n, m) ;
    }
};