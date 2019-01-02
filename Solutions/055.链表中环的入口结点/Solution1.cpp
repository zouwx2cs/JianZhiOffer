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
    ListNode* EntryNodeOfLoop(ListNode* pHead)
    {
        unordered_set<ListNode *> s ;
        ListNode *p = pHead ;
        while (nullptr != p)
        {
            if (s.find(p) != s.end())
                return p ;
            s.insert(p) ;
            p = p->next ;
        }
        
        return nullptr ;
    }
};