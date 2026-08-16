# Last updated: 17/08/2026, 00:41:06
class Solution:
    def trap(self, height: List[int]) -> int:
        # water = 0
        
        # for i in range(len(height)):
        #         rightmax = height[len(height)-1] 
        #         right = len(height)-1
        #         leftmax = height[0]
        #         left = 0

        #         while right>i:
        #             rightmax = max(rightmax,height[right])
        #             right-=1

        #         while left<=i:
        #             leftmax  =max(leftmax,height[left])
        #             left+=1
        #         if min(leftmax,rightmax) >= height[i]:
        #             water+= min(leftmax,rightmax)-height[i]
        # return water


        leftmax = 0
        rightmax= 0
        left = 0
        right = len(height)-1
        water =0

        while left<right:
            if height[left]<height[right]:
                if height[left] >=leftmax:
                    leftmax=height[left]
                else:
                    water+= leftmax - height[left]

                left+=1
            else:
                if height[right]>= rightmax:
                    rightmax = height[right]

                else:
                    water+= rightmax -height[right]

                right-=1
        return water