class Solution {
public:
  bool isMirror(TreeNode *x, TreeNode *y) {
    if (x == NULL && y == NULL)
      return true;
    if (x && y && x->val == y->val)
      return (isMirror(x->left, y->right) && isMirror(x->right, y->left));
    return false;
  }
  bool isSymmetric(TreeNode *root) { return isMirror(root, root); }
};
