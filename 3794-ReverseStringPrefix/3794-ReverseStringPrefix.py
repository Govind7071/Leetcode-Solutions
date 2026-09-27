# Last updated: 27/09/2026, 21:57:16
class Solution:
    def reversePrefix(self, s: str, k: int) -> str:



        rev=s[:k][::-1]+s[k:]
        return rev