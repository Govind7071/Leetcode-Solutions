# Last updated: 02/01/2026, 02:14:00
class Solution:
    def findTheDifference(self, s: str, t: str) -> str:
        dic={}
        for ch in s:
            if ch in dic :
                dic[ch]+=1
            else:
                dic[ch]=1



        for ch in t:
            if ch not in dic:
                return ch
            dic[ch]-=1
            if dic[ch]<0:
                return ch
            
              
        
            