//25ms
//9424k
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
        ListNode temp = null;
        while (list1 != null && list2 != null) {
            if (list1.val < list2.val) {
                if (newList == null) {
                    newList = temp = list1;
                } else {
                    temp.next = list1;
                    temp = temp.next;
                }
                list1 = list1.next;
            } else {
                if (newList == null) {
                    newList = temp = list2;
                } else {
                    temp.next = list2;
                    temp = temp.next;
                }
                list2 = list2.next;
            }
        }
        if (list1 == null && list2 != null) {
            temp.next = list2;
        }
        if (list2 == null && list1 != null) {
            temp.next = list1;
        }
        return newList;
    }
}