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
    ListNode* Merge(ListNode* pHead1, ListNode* pHead2)
    {
        ListNode h(0) ;
        ListNode *p = &h ;
        while (pHead1 && pHead2)
        {
            if (pHead1->val > pHead2->val)
            {
                p->next = pHead2 ;
                pHead2 = pHead2->next ;
            }
            else
            {
                p->next = pHead1 ;
                pHead1 = pHead1->next ;
            }
            p = p->next ;
        }
        p->next = pHead1? pHead1: pHead2 ;
        
        return h.next ;
    }
};