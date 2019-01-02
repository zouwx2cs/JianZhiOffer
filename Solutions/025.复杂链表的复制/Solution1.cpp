/*
struct RandomListNode {
    int label;
    struct RandomListNode *next, *random;
    RandomListNode(int x) :
            label(x), next(NULL), random(NULL) {
    }
};
*/
class Solution {
public:
    RandomListNode* Clone(RandomListNode* pHead)
    {
        map<RandomListNode *, int> m ;
        vector<RandomListNode *> v ;
        RandomListNode *p = pHead ;
        RandomListNode *newHead = new RandomListNode(0) ;
        RandomListNode *q = newHead ;
        int numNode = 0 ;
        while (nullptr != p)
        {
            m.insert(pair<RandomListNode *, int>(p, numNode++)) ;
            RandomListNode *tmp = new RandomListNode(p->label) ;
            q->next = tmp ;
            v.push_back(tmp) ;
            q = tmp ;
            p = p->next ;
        }
        q = newHead->next ;
        p = pHead ;
        while (nullptr != p)
        {
            if (nullptr == p->random)
                q->random = nullptr ;
            else
                q->random = v[m[p->random]] ;
            p = p->next ;
            q = q->next ;
        }
        
        return newHead->next ;
    }
};