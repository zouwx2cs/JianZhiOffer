//18ms
//9256k
public class Solution {
    public int NumberOf1(int n) {
        char[] ch = Integer.toBinaryString(n).toCharArray();
        int temp = 0;
        for (int i = 0; i < ch.length; i++) {
            if (ch[i] == '1') {
                temp++;
            }
        }
        return temp;
    }
}