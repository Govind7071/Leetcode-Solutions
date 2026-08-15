# Last updated: 16/08/2026, 02:45:36
class Solution:
    def maxArea(self, height: List[int]) -> int:
        amount = 0
        left= 0
        right = len(height) - 1

        while left < right:
            if height[left]<height[right]:
                area = height[left] *(right-left)
                amount = max(amount,area)
                left+=1
            else:
                area = height[right]*(right-left)
                amount = max(amount,area)
                right-=1
        return amount