# Last updated: 02/01/2026, 02:14:02
class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        myset=set()
        for num in nums :
            if num not in myset :
                myset.add(num)
            else :
                return True
        return False
            