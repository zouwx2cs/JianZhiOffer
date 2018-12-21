//运行时间（leetcode-105）：44ms
//占用内存：476k
/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* reConstructBinaryTree(vector<int> pre,vector<int> vin) {
        if (pre.size() == 0)
            return nullptr ;
        TreeNode *treeNode = new TreeNode(pre.at(0)) ;
        
        int mid = 0 ;
        while (vin.at(mid) != pre.at(0))
            ++mid ;
        
        vector<int> lPre(pre.begin()+1, pre.begin()+mid+1) ;
        vector<int> lVin(vin.begin(), vin.begin()+mid) ;
        treeNode->left = reConstructBinaryTree(lPre, lVin) ;
        
        vector<int> rPre(pre.begin()+mid+1, pre.end()) ;
        vector<int> rVin(vin.begin()+mid+1, vin.end()) ; 
        treeNode->right = reConstructBinaryTree(rPre, rVin) ;
        
        return treeNode ;
    }
};