/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
  void inOrder(TreeNode *root, vector<long long> &inorder_traversal) {
    if (root == NULL)
      return;
    inOrder(root->left, inorder_traversal);
    inorder_traversal.push_back(root->val);
    inOrder(root->right, inorder_traversal);
  }
  bool findTarget(TreeNode *root, int target) {
    vector<long long> inorder_traversal;
    inOrder(root, inorder_traversal);
    if (inorder_traversal.size() == 1) {
      return false;
    }
    int a = 0, b = inorder_traversal.size() - 1;
    bool flag = 0;
    while (a < b) {
      int sum_a_b = inorder_traversal[a] + inorder_traversal[b];
      if (sum_a_b == target) {
        flag = 1;
        break;
      }
      if (sum_a_b < target) {
        a++;
      } else {
        b--;
      }
    }
    if (flag) {
      return true;
    } else {
      return false;
    }
  }
};
