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
public:
    int TreeDepth(TreeNode* pRoot)
    {
        if (nullptr == pRoot)
            return 0 ;
        int depth = -1 ; 
        
        stack<int> depths ;
        stack<TreeNode *> sta ;
        
        depths.push(1) ;
        sta.push(pRoot) ;
        
        while (!sta.empty())
        {
            TreeNode *node = sta.top() ;
            sta.pop() ;
            int d = depths.top() ;
            depths.pop() ;
            depth = max(depth, d) ;
            if (node->left)
            {
                sta.push(node->left) ;
                depths.push(d+1) ;
            }
            if (node->right)
            {
                sta.push(node->right) ;
                depths.push(d+1) ;
            }
        }
        
        return depth ;
    }
};