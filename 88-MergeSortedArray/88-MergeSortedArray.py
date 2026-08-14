# Last updated: 14/08/2026, 13:16:21
class Solution:
    def merge(self, nums1: List[int], m: int, nums2: List[int], n: int) -> None:
        """
        Do not return anything, modify nums1 in-place instead.
        # """
        # i = m-1
        # j= n-1
        # k = m+n-1
        # while j>=0:
        #     if  i >=0 and nums1[i] >nums2[j]:
        #         nums1[k] = nums1[i]
        #         k-=1
        #         i-=1

        #     else:
        #         nums1[k] = nums2[j]
        #         k-=1
        #         j-=1
        i = m-1
        j = n-1
        k = m+n-1

        while j>=0:
            if i>=0 and nums1[i]>nums2[j]:
                nums1[k] = nums1[i]
                i-=1
                k-=1
            else:
                nums1[k] = nums2[j]
                k-=1
                j-=1