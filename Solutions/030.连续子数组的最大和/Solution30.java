//17ms
//9280k
public class Solution {
    public int FindGreatestSumOfSubArray(int[] array) {
        /*if (array == null) {
            return null;
        }*/
        int len = array.length;
        int max = array[0];
        for (int i = 0; i < len; i++) {
            if (max < array[i]) {
                max = array[i];
            }
        }
        for (int i = 0; i < len; i++) {
            int temp = array[i];
            for (int j = i + 1; j < len; j++) {
                temp += array[j];
                if (max < temp) {
                    max = temp;
                }
            }
        }
        return max;
    }
}