//33ms
//9148k
public class Solution {
    public int FirstNotRepeatingChar(String str) {
        for (int i = 0; i < str.length(); i++) {
            int sum = 0;
            for (int j = 0; j < str.length(); j++) {
                if (str.charAt(i) == str.charAt(j) && i != j) break;
                sum++;
            }
            if (sum == str.length()) return i; 
        }
        return -1;
    }
}