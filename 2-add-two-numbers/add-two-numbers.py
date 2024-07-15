# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def addTwoNumbers(self, l1: Optional[ListNode], l2: Optional[ListNode]) -> Optional[ListNode]:
        
        dummy = ListNode()
        result = dummy
        carry = 0
        while (l1 or l2 or carry):
            temp = 0
            if l1:
                temp += l1.val
                l1 = l1.next
            
            if l2:
                temp += l2.val
                l2 = l2.next
            
            temp = temp + carry
            valueN = temp%10
            carry = temp//10
            
            print(valueN)

            newNode = ListNode(valueN)
            result.next = newNode
            result = result.next

        return dummy.next
        