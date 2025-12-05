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
long long ans=0;
    int Mod = 1e9+7;
    int sumNumbers(TreeNode* root) {
        help(root,0);
        return ans;
    }
    void help(TreeNode* r , long long ls){
        if(!r)return ;
        ls= (ls*10 + r->val);
        if(r->left==NULL && r->right==NULL) ans = (ans+ls);
        else{
            help(r->left,ls);
            help(r->right,ls);

        }

    }
};