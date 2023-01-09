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
    vector<int> tree;

    void traversal(TreeNode* root)
    {
        if(root->left != NULL) {
            tree.push_back(root->left->val);
            traversal(root->left);
        }

        if(root->right != NULL) {
            tree.push_back(root->right->val);
            traversal(root->right);
        }
    }

    vector<int> preorderTraversal(TreeNode* root) {
        if(root!=NULL)
        {
            tree.push_back(root->val);
            traversal(root);
        }
        
        return tree;
    }
};