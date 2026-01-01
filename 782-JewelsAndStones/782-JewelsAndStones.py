# Last updated: 02/01/2026, 02:13:59
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