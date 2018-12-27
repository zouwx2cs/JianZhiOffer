//运行时间275ms
//占用内存22484k
/**
 * Definition for binary tree
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode(int x) { val = x; }
 * }
 */
public class Solution {
    public TreeNode reConstructBinaryTree(int [] pre,int [] in) {
        
        if (pre.length == 0) {
            return null;
        }
        
        TreeNode treeNode = new TreeNode(pre[0]);
        
        int i = 0;
        int len = pre.length;
        for(i = 0; i < len;i++) {
            if (pre[0] == in[i]) {
                break;
            }
        }
        
        if (i > 0) {
            int[] leftpre = new int[i];
            int[] leftin = new int[i];
            for(int j = 0;j < i;j++) {
                leftpre[j] = pre[j+1];
                leftin[j] = in[j];
            }
            treeNode.left = reConstructBinaryTree(leftpre,leftin);
        }
        
        if (len - 1 > i) {
            int rightlen = len - i - 1;
            int[] rightpre = new int[rightlen];
            int[] rightin = new int[rightlen];
            for (int j = 0; j < rightlen;j++) {
                rightpre[j] = pre[j + 1 + i];
                rightin[j] = in[j + 1 + i];
            }
            treeNode.right = reConstructBinaryTree(rightpre,rightin);
        }
        return treeNode;
    }
}