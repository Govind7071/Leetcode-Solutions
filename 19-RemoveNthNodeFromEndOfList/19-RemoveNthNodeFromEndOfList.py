# Last updated: 14/08/2026, 13:16:48
# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def removeNthFromEnd(self, head: Optional[ListNode], n: int) -> Optional[ListNode]:
        

        # fir = sec = head
        # count = 0
        # while count != n:
        #     sec = sec.next
        #     count+=1
        # if sec is None:
        #    return head.next
        # while sec.next is not None:
        #     fir = fir.next
        #     sec = sec.next

        # fir.next = fir.next.next

        # return head
        
        temp = ListNode(0)
        t1 = t2 = temp
        temp.next = head

        count =0
        while count < n+1:
            t2 = t2.next
            count+=1
            
        # if t2.next is None:
        #     return temp.next

        while t2 is not None:
            t1 = t1.next
            t2 = t2.next
        
        t1.next = t1.next.next

        return temp.next

