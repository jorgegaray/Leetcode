/**
Binary Tree Inorder Traversal

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
    vector <int> x;
    vector<int> inorderTraversal(TreeNode* root) {
        DFS(root);
        return x;
    }
    void DFS(TreeNode* r){
        if(r==NULL) return;
        DFS(r->left);
        x.push_back(r->val);
        DFS(r->right);
    }
};