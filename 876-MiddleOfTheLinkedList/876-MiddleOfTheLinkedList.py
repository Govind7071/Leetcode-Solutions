# Last updated: 27/09/2026, 21:58:14
# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def middleNode(self, head: Optional[ListNode]) -> Optional[ListNode]:
        

        fir  = sec =  head 
        

        while sec is not None and sec.next is not None:
            fir = fir.next
            sec = sec.next.next

        return fir