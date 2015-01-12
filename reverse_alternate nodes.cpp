input: 1->2->3->4->5->6
output:1->3->5->6->4->2
ListNode *reverse2(ListNode *head){
	if(head==NULL || head->next== NULL || head->next->next==NULL) return head;
	ListNode *even = head->next;
	ListNode *odd = head;
	odd->next=odd->next->next;
	odd=odd->next;
	even->next=NULL;
	while(odd && odd->next){
		ListNode *temp=odd->next->next;
		odd->next->next=even;
		even=odd->next;
		odd->next=temp;
		if(temp!=NULL) odd=odd->next;
	}
	odd->next=even;
	return head;
	
}