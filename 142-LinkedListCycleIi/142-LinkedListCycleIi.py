# Last updated: 14/08/2026, 13:16:08
# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def detectCycle(self, head: Optional[ListNode]) -> Optional[ListNode]:


        
        temp = first = second = head
        flag = False
        count = 0

        while second is not None and second.next is not None:
            
            first = first.next
            second  = second.next.next

            if first is second :
                flag  = True
                break


        if flag:
            while temp is not  first:
                temp = temp.next
                first = first.next
                


            return temp


        else:
            return None

            
         