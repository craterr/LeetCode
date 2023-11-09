/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2)
{
    struct ListNode* new=(struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* temp=new;
    // temp->next=0;
    // temp->val=val;
    int v1,v2,result;
    int carry=0;
    
    while (l1 || l2 || carry)
     {
        if(l1)
        v1=l1->val;
        else 
            v1=0;
        
        if(l2)
        v2=l2->val; 
        else 
            v2=0;
        
        result=v1+v2+carry;
        carry=result / 10;
        result=result%10;
        
        struct ListNode* newNode = (struct ListNode*)malloc(sizeof(struct ListNode));
        newNode->val = result;
        newNode->next = NULL;
        
        temp->next=newNode;
        
        temp=temp->next;
        if(l1)
        l1=l1->next;
      
        
        if(l2)
        l2=l2->next; 
        
        

     }
    return new->next;

}