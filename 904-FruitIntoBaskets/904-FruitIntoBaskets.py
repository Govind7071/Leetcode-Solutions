# Last updated: 27/09/2026, 21:58:12
class Solution:
    def totalFruit(self, fruits: List[int]) -> int:
        left = 0
        right=0
        maxlength = 0
        freq = {}
        while right<len(fruits):
            freq[fruits[right]]=freq.get(fruits[right],0)+1
            right+=1

            while len(freq)>2:
                element = fruits[left]
                freq[element]-=1
                if freq[element]== 0:
                    del freq[element]
                left+=1
            maxlength = max(maxlength,right-left)
        return maxlength