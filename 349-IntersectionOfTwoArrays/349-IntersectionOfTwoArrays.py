# Last updated: 02/01/2026, 02:14:01
class Solution:
    def intersection(self, nums1: List[int], nums2: List[int]) -> List[int]:
        myset1=set(nums1)
        myset2=set(nums2)
        final_list=[]

        for item in myset1:
            if item in myset2:
                final_list.append(item)
        return final_list