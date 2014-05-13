/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *swapPairs(ListNode *head) {
        if (head==NULL) return head;
        ListNode *res=new ListNode(0);
        ListNode *pre=res;
        pre->next=head;
        ListNode *cur=head;
        ListNode *nxt=cur->next;
        while(cur!=NULL && cur->next!=NULL){
            cur->next=nxt->next;
            nxt->next=pre->next;
            pre->next=nxt;
            nxt=cur->next;
            pre=cur;
            cur=pre->next;
            if(cur==NULL) break;
            nxt=cur->next;
        }
        return res->next;
        
    }
};