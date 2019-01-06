/*
struct ListNode {
    int val;
    struct ListNode *next;
    ListNode(int x) :
        val(x), next(NULL) {
    }
};
*/
class Solution {
public:
    ListNode* deleteDuplication(ListNode* pHead)
    {
        if (nullptr == pHead || nullptr == pHead->next)
            return pHead ;
        
        ListNode headNode(pHead->val-1) ;
        headNode.next = pHead ;
        pHead = &headNode ;
        ListNode *p = pHead ;
        
        ListNode *p1 = p->next ;
        ListNode *p2 = p1->next ;
        while (nullptr != p1 && nullptr != p2)
        {
            if (p1->val == p2->val)
            {
                do 
                {
                    ListNode *tmp = p2 ;
                    p2 = p2->next ;
                    delete tmp ;
                } while (nullptr != p2 && p1->val == p2->val) ;
                p->next = p2 ;
                delete p1 ;
            }
            else
                p = p->next ;
            p1 = p->next ;
            p2 = p1->next ;
        }
        
        return headNode.next ;
    }
};