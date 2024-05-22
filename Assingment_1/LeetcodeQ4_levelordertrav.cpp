/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
 public:
  vector<vector<int>> levelOrder(TreeNode* root) {
    if (root == nullptr)
      return {};

    vector<vector<int>> res;
    queue<TreeNode*> t{{root}};

    while (!t.empty()) {
      vector<int> current_Lev;
      for (int i = t.size(); i > 0; i--) {
        TreeNode* node = t.front();
        t.pop();
        current_Lev.push_back(node->val);
        if (node->left)
          t.push(node->left);
        if (node->right)
          t.push(node->right);
      }
      res.push_back(current_Lev);
    }

    return res;
  }
};
