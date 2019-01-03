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
    ListNode* FindFirstCommonNode( ListNode* pHead1, ListNode* pHead2) {
        unordered_set<ListNode *> us ;
        ListNode *p = pHead1 ;
        while (nullptr != p)
        {
            us.insert(p) ;
            p = p->next ;
        }
        
        for (p = pHead2; nullptr != p; p = p->next)
        {
            if (us.find(p) != us.end())
                return p ;
        }
        
        return nullptr ;
    }
};