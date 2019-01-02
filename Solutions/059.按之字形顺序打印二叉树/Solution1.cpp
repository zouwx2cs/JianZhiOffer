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
        vector<vector<int> > res ;
        queue<TreeNode *> qNodes ;
        queue<int> qLevel ;
        
        if (nullptr == pRoot)
            return {} ;
        
        qNodes.push(pRoot) ;
        qLevel.push(0) ;
        
        int preLevel = 0 ;
        vector<int> line ;
        while (!qNodes.empty())
        {
            int level = qLevel.front() ;
            qLevel.pop() ;
            TreeNode *node = qNodes.front() ;
            qNodes.pop() ;
            
            if (preLevel != level)
            {
                res.push_back(line) ;
                line.clear() ;
                preLevel = level ;
            }
            
            line.push_back(node->val) ;
            
            if (nullptr != node->left)
            {
                qNodes.push(node->left) ;
                qLevel.push(level+1) ;
            }
            
            if (nullptr != node->right)
            {
                qNodes.push(node->right) ;
                qLevel.push(level+1) ;
            }
        }
        res.push_back(line) ;
        
        for (int i = 1; i < res.size(); i += 2)
        {
            auto &itemRes = res[i] ;
            for (int j = 0, k = itemRes.size()-1; j < k; ++j, --k)
            {
                itemRes[j] ^= itemRes[k] ;
                itemRes[k] ^= itemRes[j] ;
                itemRes[j] ^= itemRes[k] ;
            }
        }
        
        return res ;
    }
    
};