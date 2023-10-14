/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


// struct ListNode* temp=(struct ListNode*)malloc(sizeof(struct ListNode));
//     if (temp!=NULL){
//     temp->val= val;
//     temp->next=NULL;}
//     return temp;
    
// }
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2)
{
//     int val;
//     struct ListNode* temp;
//     temp=createnode(val);
    
//     while(list1 !=NULL && list2!=NULL)
//     {
//         if(list1->val <= list2->val)
//             {
//             temp->next=list1;
//             list1=list1->next;
//             }
//         else
//         {
//             temp->val=list2;
//             list2=list2->next;
//         }
//           return (temp->next);  
//     }struct ListNode* createnode(int val)
// {
// //     
    if (list1==NULL)
        return list2;
    if(list2==NULL)
        return list1;
    if(list1->val >=list2->val)
    {
        list2->next=mergeTwoLists(list2->next,list1);
        return list2;
    }
        
    else 
    {
        list1->next=mergeTwoLists(list1->next,list2);
        return list1;
    }
    
}