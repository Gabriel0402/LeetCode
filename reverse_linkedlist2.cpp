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
    ListNode *reverseBetween(ListNode *head, int m, int n) {
        ListNode *res=new ListNode(0);
        ListNode *pre=res;
        ListNode *cur=head;
        int dis=n-m;
        if(dis==0) return head;
        pre->next=head;
        while((m--)>1){
            pre=cur;
            cur=cur->next;
        }
        ListNode *nxt=cur->next;
        while(nxt!=NULL && dis>0){
            cur->next=nxt->next;
            nxt->next=pre->next;
            pre->next=nxt;
            dis--;
            nxt=cur->next;
        }
        return res->next;
        
    }
};