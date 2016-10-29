/**
Reverse Nodes in k-Group

 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* h;
    stack <int> s;
    ListNode* reverseKGroup(ListNode* head, int k) {
        h=head;
        if(head==NULL) return head;
        fun(head,k);
        return h;
    }
    
    void fun(ListNode* x1, int k){
        ListNode* w=x1;
        for(int i=0; i < k && w != NULL ; i++){
            s.push(w->val);
            w=w->next;
        }
        w=x1;
        if(s.size() < k) return;
        
        while(s.size()>1){
            w->val=s.top();
            s.pop();
            w=w->next;
        }
        w->val=s.top();
        s.pop();
        if(w->next==NULL) return;
        else fun(w->next, k);
    }
};