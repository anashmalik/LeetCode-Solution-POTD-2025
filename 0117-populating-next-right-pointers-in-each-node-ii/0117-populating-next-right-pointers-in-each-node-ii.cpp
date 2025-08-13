/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    unordered_map<int,Node*>mp;
    Node* connect(Node* root) {
        help(root,0);
        return root;
    }
    void help(Node* r,int l){
        if(!r)return ;
        if(mp[l]){
            auto x=mp[l];
            x->next=r;
        }
        mp[l]=r;
        help(r->left,l+1);
        help(r->right,l+1);

    }
};