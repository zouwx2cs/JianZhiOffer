//27ms
//9856k
/*
public class ListNode {
    int val;
    ListNode next = null;

    ListNode(int val) {
        this.val = val;
    }
}*/
public class Solution {
    public ListNode Merge(ListNode list1,ListNode list2) {
        if (list1 == null) {
            return list2;
        }
        if (list2 == null) {
            return list1;
        }
        ListNode newList = null;
        if (list1.val < list2.val) {
            newList = list1;
            newList.next = Merge(list1.next,list2);
        } else {
            newList = list2;
            newList.next = Merge(list1,list2.next);
        }
        return newList;
    }
}