//48ms
//12044k
public class Solution {
    public int NumberOf1Between1AndN_Solution(int n) {
        int sum = 0;
        while (n > 0) {
            String str = String.valueOf(n);
            for (int i = 0; i < str.length(); i++) {
                if (str.charAt(i) == '1') {
                    sum++;
                }
            }
            n--;
        }
        return sum;
    }
}