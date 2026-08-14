# Last updated: 14/08/2026, 13:15:26
class Solution:
    def sortedSquares(self, nums: List[int]) -> List[int]:
        left = 0
        right =k= len(nums)-1
        result = [0]*len(nums)
        
        while left<=right:
            

            if abs(nums[left])>abs(nums[right]):
                
                result[k] = nums[left]**2
               
                left+=1

            else:
                
                result[k] = nums[right]**2
                right-=1

            k-=1

        return result