// 运行时间：3ms
// 占用内存：488k
class Solution {
public:
    int jumpFloorII(int number) {
        // return pow(2, number-1) ;
        return 1 << number-1 ;
    }
};