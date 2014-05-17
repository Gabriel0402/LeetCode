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
    ListNode* reverse(ListNode *node){
        if(node ==NULL) return node;
        ListNode *pre=new ListNode(0);
        pre->next=node;
        ListNode *cur=node;
        ListNode *nxt=node->next;
        while(nxt!=NULL){
            cur->next=nxt->next;
            nxt->next=pre->next;
            pre->next=nxt;
            nxt=cur->next;
        }
        return pre->next;
    }
    void reorderList(ListNode *head) {
        if (head==NULL) return ;
        ListNode *slow=head;
        ListNode *fast=head;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode *temp=slow->next;
        slow->next=NULL;
        ListNode *temp1=reverse(temp);
        ListNode *pt1=head;
        ListNode *pt2=temp1;
        while(pt1!=NULL && pt2!=NULL){
            temp=pt2->next;
            pt2->next=pt1->next;
            pt1->next=pt2;
            pt2=temp;
            pt1=pt1->next->next;
        }
        return;
    }
};