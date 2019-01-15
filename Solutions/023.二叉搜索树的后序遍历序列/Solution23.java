//18ms
//9536k
public class Solution {
    public boolean VerifySquenceOfBST(int [] sequence) {
        if (sequence.length == 0) {
            return false;
        } 
        return IsBST(sequence,0,sequence.length-1);
    }
    public boolean IsBST(int [] sequence,int start,int end) {
        if (end <= start) {
            return true;
        }
        int i = start;
        for (; i < end; i++) {
            if (sequence[i] > sequence[end]) {
                break;
            }
        }
        for (int j = i; j < end; j++) {
            if (sequence[j] < sequence[end]) {
                return false;
            }
        }
        return IsBST(sequence,start,i-1) && IsBST(sequence,i,end-1);
    }
}