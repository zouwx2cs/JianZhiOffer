/*
struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :
			val(x), next(NULL) {
	}
};*/
class Solution {
public:
    ListNode* ReverseList(ListNode* pHead) {
        ListNode *newHead = nullptr ;
        ListNode *tmp = pHead ;
        while (tmp)
        {
            pHead = pHead->next ;
            tmp->next = newHead ;
            newHead = tmp ;
            tmp = pHead ;
        }
        
        return newHead ;
    }
};