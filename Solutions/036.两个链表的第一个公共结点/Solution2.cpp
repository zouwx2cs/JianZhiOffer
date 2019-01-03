/*
struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :
			val(x), next(NULL) {
	}
};*/
class Solution {
private:
    inline int GetLengthOfList(ListNode *h)
    {
        int len = 0 ;
        for (; nullptr != h; h = h->next)
            ++len ;
        return len ;
    }
public:
    ListNode* FindFirstCommonNode( ListNode* pHead1, ListNode* pHead2) {
        ListNode *pLong, *pShort ;
        int len1 = GetLengthOfList(pHead1) ;
        int len2 = GetLengthOfList(pHead2) ;
        int detLen = len1 - len2 ;
        
        pLong = pHead1 ;
        pShort = pHead2 ;
        if (detLen < 0)
        {
            swap(pLong, pShort) ;
            detLen = -detLen ;
        }
        
        while (detLen--)
            pLong = pLong->next ;
        
        while (pLong != pShort)
        {
            pLong = pLong->next ;
            pShort = pShort->next ;
        }
        
        return pLong ;
    }
};