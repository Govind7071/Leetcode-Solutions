# Last updated: 27/09/2026, 21:58:16
class Solution:
    def numJewelsInStones(self, jewels: str, stones: str) -> int:
        dic={}
        for ch in jewels:
            dic[ch]=0

        for ch in stones:
            if ch in dic :
                dic[ch]+=1

        total=0
        for value in dic.values():
               total=total+value
                 
        return total