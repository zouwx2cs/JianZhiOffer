class Solution {
private:
    bool GetBalance(TreeNode *r, int &depth)
    {
        if (nullptr == r)
        {
            depth = 0 ;
            return true ;
        }
        
        int depthL, depthR ;
        int balance ;
        
        if (GetBalance(r->left, depthL) && GetBalance(r->right, depthR))
        {
            balance = depthL - depthR ;
            depth = 1 + max(depthL, depthR) ;
            return balance >= -1 && balance <= 1 ;
        }
        else
            return false ;
    }
    
public:
    bool IsBalanced_Solution(TreeNode* pRoot) {
        if (nullptr == pRoot)
            return true ;
        int depth ;
        return GetBalance(pRoot, depth) ;
    }
};