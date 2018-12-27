//运行时间：19ms
//占用内存：9360k
/**
*    public class ListNode {
*        int val;
*        ListNode next = null;
*
*        ListNode(int val) {
*            this.val = val;
*        }
*    }
*
*/
import java.util.ArrayList;
public class Solution {
    public ArrayList<Integer> printListFromTailToHead(ListNode listNode) {
        ArrayList<Integer> arr1 = new ArrayList<Integer>();
        ArrayList<Integer> arr2 = new ArrayList<Integer>();
        ListNode temp = listNode;
        while (temp != null) {
            arr1.add(temp.val);
            temp = temp.next;
        }
        for (int i = arr1.size() - 1; i > -1; i--) {
            arr2.add(arr1.get(i));
        }
        return arr2;
    }
}