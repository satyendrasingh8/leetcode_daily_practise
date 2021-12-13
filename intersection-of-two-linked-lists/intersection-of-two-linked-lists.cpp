/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
    //intersection of two linked list
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
     if(headA==NULL || headB==NULL) return NULL;
        ListNode *p=headA, *q=headB;
        while(p!=q){
             p=p==NULL?headB:p->next;
              q=q==NULL?headA:q->next;          

        }
        return p;
      
    }
};