# Last updated: 27/09/2026, 21:57:18
class Solution:
    def isPalindromic(self, s: str) -> bool:
        st=""
        for i in s:
            st+=str(format(ord(i),'08b'))

        left = 0
        right = len(st)-1
        while left<right:
            if st[left]!=st[right]:
                return False
            left+=1
            right-=1
        return True