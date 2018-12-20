// 运行时间：3ms
// 占用内存：472k
/**
*  struct ListNode {
*        int val;
*        struct ListNode *next;
*        ListNode(int x) :
*              val(x), next(NULL) {
*        }
*  };
*/
class Solution {
public:
    vector<int> printListFromTailToHead(ListNode* head) {
        if (nullptr == head)
            return {} ;
        
        vector<int> res ;
        ListNode *h = head ;
        while (nullptr != h)
        {
            res.push_back(h->val) ;
            h = h->next ;
        }
        
        vector<int> r(res.rbegin(), res.rend()) ;
        return r ;
    }
};