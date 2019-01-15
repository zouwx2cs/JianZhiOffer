//25ms
//9784k
import java.util.ArrayList;
/**
public class TreeNode {
    int val = 0;
    TreeNode left = null;
    TreeNode right = null;

    public TreeNode(int val) {
        this.val = val;

    }

}
*/
public class Solution {
    public ArrayList<ArrayList<Integer>> FindPath(TreeNode root,int target) {
        ArrayList<ArrayList<Integer>> result = new ArrayList<ArrayList<Integer>>();
        if (root == null) {
            return result;
        }
        ArrayList<Integer> arr = new ArrayList<Integer>();
        int sum = 0;
        Find(root,target,sum,result,arr);
        return result;
    }
    public void Find(TreeNode root,int target,int sum,ArrayList<ArrayList<Integer>> result,ArrayList<Integer> arr) {
        if (root == null) {
            return ;
        }
        sum += root.val;
        if (root.left == null && root.right == null) {
            if (sum == target) {
                arr.add(root.val);
                result.add(new ArrayList<Integer>(arr));
                arr.remove(arr.size()-1);
            }
            return ;
        }
        arr.add(root.val);
        Find(root.left,target,sum,result,arr);
        Find(root.right,target,sum,result,arr);
        arr.remove(arr.size()-1);
    }
}