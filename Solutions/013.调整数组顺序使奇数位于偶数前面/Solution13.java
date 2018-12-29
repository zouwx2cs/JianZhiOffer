//仿冒泡排序
//20ms
//9300k
public class Solution {
    public void reOrderArray(int [] array) {
        int temp;
        for (int i = 0; i < array.length; i++) {
            for (int j = 0; j < array.length - 1; j++) {
                if (array[j]%2 ==0 && array[j+1]%2 != 0) {
                    temp = array[j+1];
                    array[j+1] = array[j];
                    array[j] = temp;
                }
            }
        }
    }
}