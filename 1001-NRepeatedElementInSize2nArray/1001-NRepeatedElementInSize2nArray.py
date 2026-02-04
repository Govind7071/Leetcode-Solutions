# Last updated: 04/02/2026, 10:12:47
class Solution:
    def repeatedNTimes(self, nums: List[int]) -> int:
        dic={}
        my_list=[]
        for item in nums:
            if item in dic:
                dic[item]+=1
            else :
                dic[item]=1


        # max_length=max(dic,key=dic.get)
        # return max_length
        # for value in dic.values():
        #     my_list.append(value)
        # maximum=my_list[0]
        # for num in my_list:
        #     if num>maximum :
        #         maximum=num

        first_key,first_val=next(iter(dic.items()))
        maximum=first_val
        for value in dic.values():
            if maximum<value:
                maximum=value

        for key ,value in dic.items():
            if value==maximum:
                return key
