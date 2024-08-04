# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def rotateRight(self, head: Optional[ListNode], k: int) -> Optional[ListNode]:

        if not head or not head.next:
            return head
        
        curr = head
        length = 0

        while curr:
            length += 1
            curr = curr.next
        
        x = k % length

        if x == 0:
            return head
        
        dummy = ListNode(0)
        t = dummy
        curr = head
        back = length - x
        i = 0
        while i < back:
            t.next = curr
            t = t.next
            curr = curr.next
            i += 1
            
        t.next = None
        
        dummy2 = ListNode(0)
        t2 = dummy2
        t2.next = curr

        while t2.next:
            t2 = t2.next

        t2.next = dummy.next

        print(dummy2)

        return dummy2.next
        