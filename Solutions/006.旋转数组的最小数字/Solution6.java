//所用时间378ms
//所占内存28660k
import java.util.ArrayList;
public class Solution {
    public int minNumberInRotateArray(int [] array) {
        if (array.length == 0) {
            return 0;
        }
        
        if (array.length == 1) {
            return array[0];
        }
        
        for (int i = 0; i < array.length; i++) {
            if (array[i] > array[i+1]) {
                return array[i+1];
            } else {
                if (i == array.length - 1) {
                    return array[0];
                }
            }            
        }
        return array[0];
    }
}