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
    vector<TreeNode*>v;
    void flatten(TreeNode* root) {
        if(!root)return;
        help(root->left);
        help(root->right);
        auto y = root;
        for(auto x:v){
            y->left= NULL;
            y->right= x;
            y=y->right;
        }
        
    }
    void help(TreeNode* root){
        if(!root)return ;
        v.push_back(root);
        help(root->left);
        help(root->right);
    }
};