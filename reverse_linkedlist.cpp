struct ListNode{
	int val;
	ListNode *next;
	ListNode (int x):val(x),next(NULL){}
};


ListNode *reverse(ListNode *a){
	ListNode *pre=new ListNode(0);
	ListNode *cur=a;
	ListNode *nxt=a->next;
	while(cur!=NULL && nxt!=NULL){
		cur->next=nxt->next;
		nxt->next=pre->next;
		pre->next=nxt;
		nxt=cur->next;
	}
	return pre->next;
}