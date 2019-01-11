//29ms
//9384k
import java.util.ArrayList;
public class Solution {
    public ArrayList<Integer> printMatrix(int [][] matrix) {
        ArrayList<Integer> result = new ArrayList<Integer>();
        if (matrix == null) {
            return result;
        }
        int row = matrix.length - 1;
        int col = matrix[0].length - 1;
        int startrow = 0,startcol = 0;
        dayin(matrix,result,row,col,startrow,startcol);
        return result;
    }
    public void dayin(int [][] matrix,ArrayList<Integer> result,int row,int col,int startrow,int startcol) {
        if (startrow < row && startcol < col) {
            for (int i = startcol; i <= col; i++) {
                result.add(matrix[startrow][i]);
            }
            for (int j = startrow + 1; j < row; j++) {
                result.add(matrix[j][col]);
            }
            for (int i = col; i > startcol - 1; i--) {
                result.add(matrix[row][i]);
            }
            for (int j = row - 1; j > startrow; j--) {
                result.add(matrix[j][startcol]);
            }
            dayin(matrix,result,row - 1,col - 1,startrow + 1,startcol + 1);
        }
        else if (startrow == row && startcol < col) {
            for (int i = startcol ; i <= col; i++) {
                result.add(matrix[startrow][i]);
            }
        }
        else if (startrow < row && startcol == col) {
            for (int j = startrow; j <= row; j++) {
                result.add(matrix[j][startcol]);
            }
        }
        else if (startrow == row && startcol == col) {
            result.add(matrix[startrow][startcol]);
        }
    }
}