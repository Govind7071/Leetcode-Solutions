# Last updated: 14/08/2026, 13:16:40
class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        
    #     i = 0
    #     j=1
    #     while j<len(nums):
    #         if nums[j-1]!=nums[j]:
    #             i+=1
    #             nums[i]=nums[j]

    #         j+=1



    #     return i+1


        i = j = 0

        while j<len(nums):
            if nums[j] != nums[i]and i!=j:

               i+=1
               nums[i],nums[j] = nums[j],nums[i]

            j+=1

        return i+1