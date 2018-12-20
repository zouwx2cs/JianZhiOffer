//运行时间：4ms
//占用内存：460k
class Solution {
public:
    int Sum_Solution(int n) {
        int i = 0 ;
        n && ( i = Sum_Solution(n-1) ) ;
        return n + i ;
    }
};