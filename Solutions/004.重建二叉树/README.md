# 重建二叉树 #
## 题目描述 ##
输入某二叉树的前序遍历和中序遍历的结果，请重建出该二叉树。假设输入的前序遍历和中序遍历的结果中都不含重复的数字。例如输入前序遍历序列{1,2,4,7,3,5,6,8}和中序遍历序列{4,7,2,1,5,3,8,6}，则重建二叉树并返回。

### 一般解法 ###
- **解题思路**

	递归，找到pre[0]在vin的位置，划分左右子树结点集合，递归建立左右子树
	
- **时间复杂度**

	**O(log2(n))**， 设二叉树节点数为n 

- **空间复杂度**

	**O(log2(n))**， 转置使用了数量与n额外空间

- **提交版本**
	
Source Name | Language | Time | Memory | Contributor
---|---|---|---|---
Solution1.cpp | c++11 | - | - | zouwx2cs

### 备注 ###
#### c++ ####
	/**
	 * Definition for binary tree
	 * struct TreeNode {
	 *     int val;
	 *     TreeNode *left;
	 *     TreeNode *right;
	 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
	 * };
	 */

### 奇技淫巧 ###
- 给vector传值可以直接
		treeNode->left = reConstructBinaryTree(vector<int>(pre.begin()+1, pre.begin()+mid+1),
		vector<int>(vin.begin(), vin.begin()+mid)) ;
- 用vector下标代替，而不是重新建立vector可以获得更好的效率
