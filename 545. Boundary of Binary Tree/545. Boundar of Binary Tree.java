/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode(int x) { val = x; }
 * }
 */
public class Solution {
    public List<Integer> boundaryOfBinaryTree(TreeNode root) {
        if (root == null) {
            return new LinkedList<Integer>();
        }
        List<TreeNode> left = new LinkedList<TreeNode>();
        if (root.left == null) {
            left.add(root);
        }
        else {
            TreeNode node = root;
            while (node != null) {
                left.add(node);
                if (node.left != null) {
                    node = node.left;
                }
                else {
                    node = node.right;
                }
            }    
        }
        List<TreeNode> right = new LinkedList<TreeNode>();
        if (root.right == null) {
            right.add(root);
        }
        else {
            TreeNode node = root;
            while (node != null) {
                right.add(0, node);
                if (node.right != null) {
                    node = node.right;
                }
                else {
                    node = node.left;
                }
            }    
        }
        List<TreeNode> mid = new LinkedList<TreeNode>();
        inorder(root, mid);
        if (mid.size() > 0 && left.get(left.size() - 1) == mid.get(0)) {
            mid.remove(0);
        }
        if (mid.size() > 0 && mid.get(mid.size() - 1) == right.get(0)) {
            right.remove(0);
        }
        if (right.size() > 0 && right.get(right.size() - 1) == left.get(0)) {
            right.remove(right.size() - 1);
        }
        List<Integer> res = new LinkedList<Integer>();
        for (TreeNode n:left) {
            res.add(n.val);
        }
        for (TreeNode n:mid) {
            res.add(n.val);
        }
        for (TreeNode n:right) {
            res.add(n.val);
        }
        return res;
    }
    private void inorder(TreeNode node, List<TreeNode> mid) {
        if (node == null) {
            return;
        }
        if (node.left == null && node.right == null) {
            mid.add(node);
        }
        else {
            inorder(node.left, mid);
            inorder(node.right, mid);
        }
    }
}