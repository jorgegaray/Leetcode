/**
404. Sum of Left Leaves
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int n=0;
    int sumOfLeftLeaves(TreeNode* root) {
        ss(root,0);
        return n;
    }
    void ss(TreeNode* r, int t){
        if(r==NULL) return ;
        if(r->left==NULL && r->right==NULL && t==1)
            n+=r->val;
        ss(r->left,1);
        ss(r->right,0);
        return ;
    }
};