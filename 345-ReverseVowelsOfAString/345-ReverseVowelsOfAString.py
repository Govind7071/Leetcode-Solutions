# Last updated: 14/08/2026, 13:15:44
class Solution:
    def reverseVowels(self, s: str) -> str:
        
        mylist = list(s)
        string = "aeiouAEIOU"
        left = 0 
        right = len(s) - 1
        while left <right:
            while left <right and mylist[left] not in string :
                left +=1

            while left < right and mylist[right] not in string :
                right -=1

            mylist[left],mylist[right] = mylist[right],mylist[left]

            left+=1
            right-=1

        return "".join(mylist)


            



                
            