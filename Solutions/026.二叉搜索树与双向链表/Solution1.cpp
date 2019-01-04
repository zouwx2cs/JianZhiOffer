/*
struct TreeNode {
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
	TreeNode(int x) :
			val(x), left(NULL), right(NULL) {
	}
};*/
class Solution {
private:
    void Conv(TreeNode *node, TreeNode *pre, TreeNode *next, 
                   TreeNode *&preNodeNext, TreeNode *&nextNodePre)
    {
        if (nullptr != node->left)
        {
            Conv(node->left, pre, node, preNodeNext, node->left) ;
        }
        else
        {
            node->left = pre ;
            preNodeNext = node ;
        }
        
        if (nullptr != node->right)
        {
            Conv(node->right, node, next, node->right, nextNodePre) ;
        }
        else
        {
            node->right = next ;
            nextNodePre = node ;
        }
    }
public:
    TreeNode* Convert(TreeNode* pRootOfTree)
    {
        if (nullptr == pRootOfTree)
            return nullptr ;
        
        TreeNode *head, *rear ;
        Conv(pRootOfTree, nullptr, nullptr, head, rear) ;
        return head ;
    }
};