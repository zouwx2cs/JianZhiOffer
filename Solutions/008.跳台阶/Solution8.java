//运行时间564
//占用内存9048
public class Solution {
    public int JumpFloor(int target) {
        if (target == 1) {
            return 1;
        }
        if (target == 2){
            return 2;
        }
        return JumpFloor(target - 2) + JumpFloor(target - 1);
    }
}