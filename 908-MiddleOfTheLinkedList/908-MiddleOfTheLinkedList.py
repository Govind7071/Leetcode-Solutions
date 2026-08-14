# Last updated: 14/08/2026, 13:15:34
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