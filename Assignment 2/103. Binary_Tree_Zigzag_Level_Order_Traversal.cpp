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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
          if (root == nullptr) { // Handle the case when root is null
            return {};
        }
        queue<TreeNode*> q;
        q.push(root);
        vector<vector<int>> ans;
        int count =0;
        while(!q.empty()){
            int n=q.size();
            vector<int> row;
            
            for(int i=0;i<n;i++){
                TreeNode* curr=q.front();
                q.pop();
                if(curr->left){
                    q.push(curr->left);
                }
                if(curr->right){
                    q.push(curr->right);
                }
                row.push_back(curr->val);
                
            }
            if(count%2!=0){
                      reverse(row.begin(),row.end());
            }
           count++;
           ans.push_back(row);

        }
        return ans;
    }
};
