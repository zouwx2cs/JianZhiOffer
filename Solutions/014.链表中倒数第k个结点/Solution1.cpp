//运行时间：4ms
//占用内存：488k
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
    ListNode* FindKthToTail(ListNode* pListHead, unsigned int k) {
        ListNode *front = pListHead, *backK = pListHead ;
        while (k--)
        {
            if (nullptr == front)
                return nullptr ;
            front = front->next ;
        }
        
        while (nullptr != front)
        {
            backK = backK->next ;
            front = front->next ;
        }
        return backK ;
    }
};