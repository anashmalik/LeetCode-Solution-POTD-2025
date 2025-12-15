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
    int ans=0,MOD= 1e9+7;
    int maxPathSum(TreeNode* root) {
        ans = root->val;
        int t= help(root);
        return ans;        
    }
    long long help(TreeNode* r){
        if(!r)return 0;
        long long a=r->val;
        long long b=help(r->left);
        long long c=help(r->right);
        int x = (a+b+c)%MOD;
        ans= max(ans,x);
        a+= max(b,c);
        return (a>0)?a:0; 
    }
};