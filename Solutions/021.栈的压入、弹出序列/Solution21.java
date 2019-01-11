//18ms
//9396k
import java.util.Stack;

public class Solution {
    public boolean IsPopOrder(int [] pushA,int [] popA) {
        if (pushA.length == 0 || popA.length == 0) {
            return false;
        }
        Stack<Integer> s = new Stack<Integer>();
        int index = 0;
        int len = pushA.length;
        for (int i = 0; i < len; i++) {
            s.push(pushA[i]);
            while (!s.isEmpty() && s.peek() == popA[index]) {
                s.pop();
                index++;
            }
        }
        if (s.isEmpty()) {
            return true;
        } else {
            return false;
        }
    }
}