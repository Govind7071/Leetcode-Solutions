# Last updated: 02/01/2026, 02:14:10
class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        
            for i in range(len(nums)):
                for j in range(i+1,len(nums)):
                    if nums[i]+nums[j]==target :
                         List=[]
                         List.append(i)
                         List.append(j)
                         return List
                    