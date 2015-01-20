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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *tempA=headA;
        ListNode *tempB=headB;
        int a=0;
        int b=0;
        while(tempA){
            tempA=tempA->next;
            a++;
        }
        while(tempB){
            tempB=tempB->next;
            b++;
        }
        int dif=a>b?(a-b):(b-a);
        tempA=a>b?headA:headB;
        tempB=a>b?headB:headA;
        while(dif--){
            tempA=tempA->next;
        }
        while(tempA){
            if(tempA==tempB) return tempA;
            else{
                tempA=tempA->next;
                tempB=tempB->next;
            }
            
        }
        return NULL;
        
    }
};