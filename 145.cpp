/**
Binary Tree Postorder Traversal 

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
    vector<int> x;
    vector<int> postorderTraversal(TreeNode* root) {
        if(root==NULL) return x;
        DFS(root);
        return x;
        
    }
    void DFS(TreeNode* r){
        if(r==NULL) return;
        DFS(r->left);
        DFS(r->right);
        x.push_back(r->val);
    }
};