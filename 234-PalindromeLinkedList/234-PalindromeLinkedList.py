# Last updated: 14/08/2026, 13:15:50
# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def isPalindrome(self, head: Optional[ListNode]) -> bool:
        fir = sec = head
        
        while sec is not None and sec.next is not None:
            fir = fir.next
            sec = sec.next.next

        if sec is not None:     # odd length
           fir = fir.next

        prev = None
        Next = None


        while fir is not None:
            Next = fir.next
            fir.next = prev
            prev = fir
            fir = Next

        while prev is not None :
            if prev.val != head.val:
                return False
            else:
                head = head.next
                prev = prev.next

        return True


        
