# Last updated: 27/09/2026, 21:57:12
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