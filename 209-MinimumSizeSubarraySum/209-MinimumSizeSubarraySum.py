# Last updated: 18/08/2026, 01:09:57
class Solution:
    def minSubArrayLen(self, target: int, nums: List[int]) -> int:
        left = right = 0
        min_length = len(nums)+1
        window_sum=0
        while right<len(nums):
            window_sum+=nums[right]
            right+=1

            while window_sum >= target:
                min_length = min(min_length,right-left)
                window_sum -= nums[left]
                left+=1
        if min_length == len(nums)+1:
            return 0
        return min_length
            