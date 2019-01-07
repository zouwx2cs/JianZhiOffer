/*
struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
    TreeNode(int x) :
            val(x), left(NULL), right(NULL) {
    }
};
*/
class Solution {
private:
    bool isSymSub(TreeNode *lRoot, TreeNode *rRoot)
    {
        if (nullptr == lRoot && nullptr == rRoot)
            return true ;
        else if (nullptr == lRoot || nullptr == rRoot)
            return false ;
        
        if (lRoot->val != rRoot->val)
            return false ;
        
        return isSymSub(lRoot->left, rRoot->right)
            && isSymSub(lRoot->right, rRoot->left) ;
    }
public:
    bool isSymmetrical(TreeNode* pRoot)
    {
        if (nullptr == pRoot)
            return true ;
        return isSymSub(pRoot->left, pRoot->right) ;
    }

};
