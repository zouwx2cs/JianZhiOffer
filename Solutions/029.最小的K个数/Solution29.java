//27ms
//9648k
import java.util.ArrayList;
public class Solution {
    public ArrayList<Integer> GetLeastNumbers_Solution(int [] input, int k) {
        ArrayList<Integer> result = new ArrayList<Integer>();
        if (input == null || input.length < k) {
            return result;
        }
        int temp;
        int len = input.length;
        for (int i = 0; i < len; i++) {
            for (int j = 0; j < len - 1; j++) {
                if (input[j] > input[j+1]) {
                    temp = input[j];
                    input[j] = input[j+1];
                    input[j+1] = temp;
                }
            }
        }
        for (int i = 0; i < k; i++) {
            result.add(input[i]);
        }
        return result;
    }
}