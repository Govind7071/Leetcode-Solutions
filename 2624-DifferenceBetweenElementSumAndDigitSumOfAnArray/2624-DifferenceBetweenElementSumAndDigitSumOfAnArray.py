# Last updated: 14/08/2026, 13:15:16
class Solution:
    def differenceOfSum(self, nums: List[int]) -> int:
        

        sumEle = 0

        for i in nums:
            sumEle +=i 

        mystring =''
        digSum = 0
        for i in nums :
            mystring = ''
            mystring = str(i)
            for i in mystring :
             digSum +=int(i)

        

        

        return sumEle - digSum