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
    int sumNumbers(TreeNode* root) {
        vector<int>ans;
        help(root,ans,0);
        int an=0;
        for(auto x:ans){
            an+=((x));
        }
        return an;
    }
    void help(TreeNode* root,vector<int>&ans,int s){
        if(!root)return;
        if(root->left==NULL and root->right==NULL){
            ans.push_back(s*10+root->val);
        }
        help(root->left,ans,s*10+((root->val)));
        help(root->right,ans,s*10+((root->val)));
    }
};