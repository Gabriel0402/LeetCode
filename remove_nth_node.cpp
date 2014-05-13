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
    ListNode *removeNthFromEnd(ListNode *head, int n) {
	 	    ListNode *result=head;
			ListNode *temp=head;
			while(n--)
			{
				temp=temp->next;
			}
			if(temp==NULL) 
			{
				head=head->next;
				return head;
			}
			temp=temp->next;
			while(temp!=NULL)
			{
				result=result->next;
				temp=temp->next;
			}
			result->next=result->next->next;
			return head;
			 
 
    }
};