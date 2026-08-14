# Last updated: 14/08/2026, 13:16:23
# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def deleteDuplicates(self, head: Optional[ListNode]) -> Optional[ListNode]:
        t1 = head

        while t1 is not None and t1.next is not None :
            if t1.val == t1.next.val:
                t1.next = t1.next.next

            else :
                t1 = t1.next


        return head

