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
    void Build(TreeNode *r, stringstream &ss)
    {
        if (nullptr != r)
        {
            ss << r->val << "*" ;
            Build(r->left, ss) ;
            Build(r->right, ss) ;
        }
        else
            ss << "*" ;
    }
public:
    char* Serialize(TreeNode *root) {
        stringstream ss ;
        Build(root, ss) ;
        string str ;
        ss >> str ;
        
        char *c_str = new char[str.length()+1] ;
        strcpy(c_str, str.c_str()) ;
        return c_str ;
    }
    TreeNode* Deserialize(char *&p) {
        if (*p == '*' || *p == '\0')
        {
            ++p ;
            return nullptr ;
        }
        
        int val = 0 ;
        while (*p != '*')
        {
            val *= 10 ;
            val += (*p++) - '0' ;
        }
        ++p ;
        
        TreeNode *node = new TreeNode(val) ;
        node->left = Deserialize(p) ;
        node->right = Deserialize(p) ;
        return node ;
    }
};
