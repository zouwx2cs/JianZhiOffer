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
    bool IsSameTree(TreeNode *r1, TreeNode *r2)
    {
        if (nullptr == r2)
            return true ;
        
        if (nullptr == r1)
            return false ;
        
        if (r1->val != r2->val)
            return false ;
        
        return IsSameTree(r1->left, r2->left) && IsSameTree(r1->right, r2->right) ;
    }
public:
    bool HasSubtree(TreeNode* pRoot1, TreeNode* pRoot2)
    {
        if (nullptr == pRoot1 || nullptr == pRoot2)
            return false ;
        
        if (pRoot1->val == pRoot2->val && IsSameTree(pRoot1, pRoot2))
            return true ;
        else if (HasSubtree(pRoot1->left, pRoot2))
            return true ;
        else if (HasSubtree(pRoot1->right, pRoot2))
            return true ;
        else
            return false ;
    }
};