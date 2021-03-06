/**
Swap Nodes in Pairs

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
    ListNode* swapPairs(ListNode* head) {
        h=head;
        if(head==NULL || head->next==NULL) return h;
        fun(head,head->next);
        return h;
    }
    void fun(ListNode* x1,ListNode* x2 ){
        int aux=x1->val;
        x1->val=x2->val;
        x2->val=aux;
        if(x2->next==NULL || x2->next->next == NULL) return;
        else fun(x2->next, x2->next->next);
    }
};