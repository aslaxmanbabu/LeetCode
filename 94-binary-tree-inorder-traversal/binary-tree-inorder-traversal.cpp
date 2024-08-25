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
    vector<int> inorderTraversal(TreeNode* root) {

        if (!root) return {};

        vector<int> result;
        stack<TreeNode*> stack1;
        TreeNode* node = root;

        while (!stack1.empty() || node != nullptr) {
            while (node != nullptr) {
                stack1.push(node);
                node = node->left;
            }   

            node = stack1.top();
            stack1.pop();
            result.push_back(node->val);

            node = node->right;
        }
        
        return result;
    }
};