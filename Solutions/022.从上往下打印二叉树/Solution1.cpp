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
public:
        vector<vector<int> > Print(TreeNode* pRoot) {
            if (nullptr == pRoot)
                return {} ;
            
            vector<vector<int> > res ;
            
            queue<TreeNode *> q ;
            q.push(pRoot) ;
            
            queue<int> level ;
            level.push(0) ;
            
            while (!q.empty())
            {
                TreeNode *node = q.front() ;
                q.pop() ;
                
                int l = level.front() ;
                level.pop() ;
                
                if (l >= res.size())
                    res.push_back({node->val}) ;
                else
                    res.at(l).push_back(node->val) ;
                
                if (node->left)
                {
                    q.push(node->left) ;
                    level.push(l+1) ;
                }
                if (node->right)
                {
                    q.push(node->right) ;
                    level.push(l+1) ;
                }
               
            }
            
            return res ;
        }
};