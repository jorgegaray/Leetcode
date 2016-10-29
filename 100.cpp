/**
Same Tree

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
    bool des=true;
    bool isSameTree(TreeNode* p, TreeNode* q) {
       DFS(p,q);
       return des;
    }
    
    void DFS(TreeNode* p, TreeNode* q){
        if(p== NULL && q==NULL) return;
        
        else if((p== NULL && q!=NULL) || (p!= NULL && q==NULL)){
            des= false;
            return;
        }
        else if(p->val==q->val){
            DFS(p->left, q->left);
            DFS(p->right, q->right);
        }
        else{
            des=false;
        }
    }
};