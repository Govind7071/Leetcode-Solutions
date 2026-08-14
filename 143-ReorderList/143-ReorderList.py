# Last updated: 14/08/2026, 13:16:03
# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def reorderList(self, head: Optional[ListNode]) -> None:
        """
        Do not return anything, modify head in-place instead.
        """
        first = second = head

        while second is not None and second.next is not None:
            first = first.next
            second = second.next.next

        
        second = first.next
        first.next = None
        
        prev = None
        Next = None
        while second is not  None:
            Next = second.next
            second.next = prev
            prev = second 
            second = Next


        while prev is not None :
            t1 = head.next
            t2 = prev.next
        
            head.next = prev
            prev.next = t1
            head = t1
            prev = t2