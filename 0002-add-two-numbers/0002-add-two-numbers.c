/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) 
{
    struct ListNode *t1 = l1, *t2 = l2;
    struct ListNode *head=NULL, *t3=NULL;
    // Create pointers t1 and t2 to traverse the input lists, and t3 and head for the result.
    int sum=0;
    
    while(t1 || t2 || sum) 
        // ('or sum' is used for a edge case when there should be a new node creation because of carry            like l1=4,l2=6 result should create a new node to carry ; [1,0] )
    
    {
        if(t1){
            sum += t1->val;
            t1 = t1->next;
        }if(t2){
            sum += t2->val;
            t2 = t2->next;
        }
        
        
        // Create a new node to store the ones digit and carry 
        struct ListNode *new = malloc(sizeof(struct ListNode));
        new->val = sum%10; // store the ones digit.
        sum /= 10; //carry
        
        if(head)
        {
            t3->next = new;
            t3 = new;
        }else
            head = t3 = new;
    }
    t3->next = NULL;
    return head;
    
}