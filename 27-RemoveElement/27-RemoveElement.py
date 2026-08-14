# Last updated: 14/08/2026, 13:16:36
class Solution:
    def removeElement(self, nums: List[int], val: int) -> int:
        # i = j = 0

        # while j<len(nums):
        #     if nums[j]==val:
        #         j+=1

        #     elif nums[i] == val and nums[j] != val:
        #         nums[i],nums[j] = nums[j],nums[i]
        #         i+=1

        #     else:
        #         i+=1
        #         j+=1

        # return i

        i = j = 0
        while j<len(nums):
            if nums[j] != val:
                if i != j:
                    nums[i],nums[j]=nums[j],nums[i]
                i+=1
            j+=1
        return i
