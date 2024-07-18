# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def mergeTwoLists(self, list1: Optional[ListNode], list2: Optional[ListNode]) -> Optional[ListNode]:

        dummy = ListNode()
        result = dummy

        while( list1 or list2 ):
            
            if list1:
                temp = list1.val
                if list2 and temp > list2.val:
                    temp = list2.val
                    list2 = list2.next
                else:
                    list1 = list1.next
            elif list2:
                temp = list2.val
                if list1 and temp > list1.val:
                    temp = list1.val
                    list1 = list1.next
                else:
                    list2 = list2.next

            newNode = ListNode(temp)
            result.next = newNode
            result = result.next

        return dummy.next
        