/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head)
{
    struct ListNode* cur =head;
    struct ListNode* prev =NULL;
    
    while(cur!=NULL)
    {
        struct ListNode* fwd =cur->next;
        cur->next=prev; //reversing the pointer
        prev=cur;
        cur=fwd;
   }
    return prev;
    
        

}