# Last updated: 14/08/2026, 13:16:18
# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def reverseBetween(self, head: Optional[ListNode], left: int, right: int) -> Optional[ListNode]:
        dum = ListNode(0)
        dum.next = head
        temp  = before  = dum

        count = 1
        while count < left :
            before = before.next
            count+=1
        cur = before.next
        tail = cur
        prev = None
        Next = None
        count = 0
        while count <=right-left:
            Next = cur.next
            cur.next = prev
            prev = cur
            cur = Next
            count+=1

        before.next = prev
        tail.next = cur
        return temp.next
        


            



