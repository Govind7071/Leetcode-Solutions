# Last updated: 14/08/2026, 13:16:44
# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def reverseKGroup(self, head: Optional[ListNode], k: int) -> Optional[ListNode]:
        

        dummy = ListNode(0)
        dummy.next  = head
        prevGroup = dummy

        while True:
            kth = prevGroup
            for _ in range(k):
                kth = kth.next

                if kth is None:
                    return  dummy.next

            nextGroup = kth.next

            prev = nextGroup
            current = prevGroup.next
            temp = prevGroup.next

            while current != nextGroup:
                Next = current.next
                current.next = prev
                prev = current
                current = Next

            
            prevGroup.next = prev
            
            prevGroup = temp

