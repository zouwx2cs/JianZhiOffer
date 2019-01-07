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
    vector<vector<int> > paths ;
    void SearchPath(TreeNode *r, int expectNumber, int accumulator, vector<int> &path)
    {
        if (nullptr == r)
            return ;
        
        path.push_back(r->val) ;
        accumulator += r->val ;
        
        if (nullptr == r->left && nullptr == r->right)
        {
            if (accumulator == expectNumber)
                paths.push_back(path) ;
        }
        else
        {
            SearchPath(r->left, expectNumber, accumulator, path) ;
            SearchPath(r->right, expectNumber, accumulator, path) ;
        }
        
        path.pop_back() ;
    }
public:
    vector<vector<int> > FindPath(TreeNode* root,int expectNumber) {
        vector<int> path ;
        SearchPath(root, expectNumber, 0, path) ;
        return paths ;
    }
};