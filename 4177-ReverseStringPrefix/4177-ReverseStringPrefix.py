# Last updated: 04/02/2026, 10:12:44
class Solution:
    def reversePrefix(self, s: str, k: int) -> str:



        rev=s[:k][::-1]+s[k:]
        return rev