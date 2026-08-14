# Last updated: 14/08/2026, 13:16:00
class Solution:
    def twoSum(self, numbers: List[int], target: int) -> List[int]:
        

        i = 0
        j = len(numbers) -1
        while i <j:
            sum = numbers[i]+numbers[j]
            if sum == target:
                return i+1,j+1

            elif sum> target:
                j-=1
            else :
                i+=1
            
