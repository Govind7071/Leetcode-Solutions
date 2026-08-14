# Last updated: 14/08/2026, 13:16:11
# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def hasCycle(self, head: Optional[ListNode]) -> bool:
        first = second = head
        while second is not None and second.next is not None :
            first = first.next
            second = second.next.next

            if first is second :
                return True

        return False