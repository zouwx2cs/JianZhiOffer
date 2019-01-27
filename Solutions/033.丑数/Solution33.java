//17ms
//9344k
public class Solution {
    public int GetUglyNumber_Solution(int index) {
        if (index <= 0) {
            return 0;
        }
        int[] result = new int[index];
        int count = 0;
        result[0] = 1;
        int i2 = 0;
        int i3 = 0;
        int i5 = 0;
        int temp;
        while (count < index - 1) {
            temp = min(result[i2] * 2,min(result[i3] * 3,result[i5] * 5));
            if (temp == result[i2] * 2) i2++;
            if (temp == result[i3] * 3) i3++;
            if (temp == result[i5] * 5) i5++;
            count++;
            result[count] = temp;
        }
        return result[index - 1];
    }
    public int min(int a,int b) {
        return (a > b) ? b : a;
    }
}