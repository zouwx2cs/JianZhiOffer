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
    TreeNode* KthNode(TreeNode* pRoot, int k)
    {
        stack<TreeNode *> sta ;
        TreeNode *node = pRoot ;
        while (nullptr != node || !sta.empty())
        {
            while (nullptr != node)
            {
                sta.push(node) ;
                node = node->left ;
            }
            
            while (!sta.empty())
            {
                node = sta.top() ;
                sta.pop() ;

                if (--k == 0)
                    return node ;

                if (nullptr != node->right)
                {
                    node = node->right ;
                    break ;
                }
                else
                    node = nullptr ;
            }
        }
        return nullptr ;
    }
};