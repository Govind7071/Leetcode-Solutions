# Last updated: 27/09/2026, 21:57:13
class Solution:
    def countSpecialIntegers(self, nums: list[int]) -> int:
        blocks = {}

        for i in range(len(nums)):
            # New block starts
            if i == 0 or nums[i] != nums[i - 1]:
                blocks[nums[i]] = blocks.get(nums[i], 0) + 1

        count = 0

        for num in blocks:
            if blocks[num] == 1:
                count += 1

        return count
        

