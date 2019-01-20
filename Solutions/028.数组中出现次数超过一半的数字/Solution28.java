//15ms
//9160k
public class Solution {
    public int MoreThanHalfNum_Solution(int [] array) {
        if (array == null) {
            return 0;
        }
        if (array.length == 1) {
            return array[0];
        }
        int len = array.length;
        for (int i = 0; i < len; i++) {
            int sum = 1;
             for (int j = i-1; j > -1; j--) {
                 if (array[j] == array[i]) {
                     sum++;
                 }
                 if (sum > len / 2) {
                     return array[i];
                 }
             }
        }
        return 0;
    }
}