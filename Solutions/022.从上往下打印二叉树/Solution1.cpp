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
    vector<int> PrintFromTopToBottom(TreeNode* root) {
        queue<TreeNode *> q ;
        vector<int> res ;
        q.push(root) ;
        
        while (!q.empty())
        {
            TreeNode *node = q.front() ;
            q.pop() ;
            
            if (node == nullptr)
                continue ;
            
            res.push_back(node->val) ;
            q.push(node->left) ;
            q.push(node->right) ;
        }
        
        return res ;
    }
};