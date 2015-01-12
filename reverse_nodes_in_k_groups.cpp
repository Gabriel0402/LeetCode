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
    ListNode *reverseKGroup(ListNode *head, int k) {
        if(head==NULL) return head;
        int len=0;
        ListNode *a=head;
        while(a!=NULL){
            a=a->next;
            len++;
        }
        if(k>len) return head;
        ListNode *res=new ListNode(0);
        ListNode *pre=res;
        pre->next=head;
        ListNode *cur=head;
        ListNode *nxt=head->next;
        int temp=k-1;
        while(temp--){
            if(nxt==NULL) return res->next;
            cur->next=nxt->next;
            nxt->next=pre->next;
            pre->next=nxt;
            nxt=cur->next;
        }
        pre=cur;
        pre->next=reverseKGroup(nxt,k);
        return res->next;
    }
};