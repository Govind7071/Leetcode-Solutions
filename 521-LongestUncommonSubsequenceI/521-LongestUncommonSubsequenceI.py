# Last updated: 02/01/2026, 02:13:54
class Solution:
    def findLUSlength(self, a: str, b: str) -> int:
       length_a=len(a)
       length_b=len(b)
       if length_a!=length_b:
            if length_a>length_b:
                return length_a
            else:
                return length_b
       else :
            for i in range(length_a):
                if a[i]!=b[i]:
                    return length_a
            return -1

