//26ms
//9236k
//头结点记得
/*
public class ListNode {
    int val;
    ListNode next = null;

    ListNode(int val) {
        this.val = val;
    }
}*/
public class Solution {
    public ListNode FindKthToTail(ListNode head,int k) {
        if (head == null) {
            return null;
        }
        ListNode temp = head;
        int num = 0;
        while (temp != null) {
            temp = temp.next;
            num++;
        }
        if(num < k){
            return null;
        }
        temp = head;
        num = num - k;
        while (num != 0) {
            temp = temp.next;
            num--;
        }
        return temp;
    }
}