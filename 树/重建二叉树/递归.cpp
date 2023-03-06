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
    TreeNode* dfs(vector<int>& pre, vector<int>& vin, int rootprepos, int vinstart,
                  int vinend) {
        if (vinstart > vinend) {
            return nullptr;
        }
        int rootval = pre[rootprepos];
        TreeNode* root = new TreeNode(rootval);
        for (int i = vinstart; i <= vinend; ++i) {
            if (vin[i] == rootval) {
                root->left = dfs(pre, vin, rootprepos + 1, vinstart, i - 1);
                root->right = dfs(pre, vin, rootprepos + (i - vinstart) + 1, i + 1, vinend);
                break;
            }
        }
        return root;
    }

    TreeNode* reConstructBinaryTree(vector<int> pre, vector<int> vin) {
        return dfs(pre, vin, 0, 0, pre.size() - 1);
    }
};
