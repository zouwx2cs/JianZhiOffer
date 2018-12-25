public class Solution {
    public boolean Find(int target, int [][] array) {
        for (int i = 0; i < array.length; i++) {
            for (int j = 0; j < array[i].length; j++) {
                if (target == array[i][j]) {
                    return true;
                }
                if (target < array[i][j]) {
                    break;
                }
            }
        }
        return false;
    }
}