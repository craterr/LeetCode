# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def hasCycle(self, head: Optional[ListNode]) -> bool:
        cur = head
        
        while cur and cur.next:
            cur.val = "x"
            
            if cur.next.val == "x":
                return True
            cur = cur.next
        return False