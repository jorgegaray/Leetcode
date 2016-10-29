/**
Remove Duplicates from Sorted List 

 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* h=head;
        fun(head);
        return h;
    }
    
    void fun(ListNode* h1){
        if(h1==NULL || h1->next==NULL) return;
        else{
            ListNode* x=h1->next;
            while(true){
                if(x==NULL) break;
                else if(x->val == h1->val) x=x->next;
                else{
                    break;
                }
            }
            h1->next=x;
            fun(h1->next);
            return;
        }
    }
};