//所用时间17ms
//所占内存9288k
public class Solution {
    public int JumpFloorII(int target) {
        return (new Double(Math.pow(2,target-1))).intValue();
    }
}