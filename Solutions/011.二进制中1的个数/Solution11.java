//20ms
//9380k
public class Solution {
    public int NumberOf1(int n) {
        int num = 0;
        while (n != 0) {
            num++;
            n = n & (n - 1);
        }
        return num;
    }
}