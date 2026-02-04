# Last updated: 04/02/2026, 10:12:55
class Solution:
    def firstMissingPositive(self, nums: List[int]) -> int:
        my_set=set(nums)
        i=1
        largest=len(nums)
        # for num in my_set :
        #     if num>largest :
        #         largest=num


        if largest<=0:
            return i
        else :
            for item  in range(i,largest+1):
                if item not in my_set:
                    return item
            return largest+1