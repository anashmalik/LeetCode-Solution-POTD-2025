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
class BSTIterator {
public:
    vector<int> v;
    int i = 0;
    BSTIterator(TreeNode* root) {
        help(root);
        // for(auto x:v)cout<<x<<" ";
    }
    
    int next() {
        return v[i++];
    }
    
    bool hasNext() {
        return v.size()>i;
    }
    void help(TreeNode* r){
        if(!r)return;
        help(r->left);
        v.push_back(r->val);
        help(r->right);
    }

};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */