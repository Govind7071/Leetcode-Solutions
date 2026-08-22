# Last updated: 22/08/2026, 22:28:36
class Solution:
    def checkInclusion(self, s1: str, s2: str) -> bool:
        i = 0
        freq1 = {}
        while i<len(s1):
            freq1[s1[i]]=freq1.get(s1[i],0)+1
            i+=1
        left =0
        right = 0
        freq2 = {}
        while right<len(s2):
            
            freq2[s2[right]]=freq2.get(s2[right],0)+1
            right+=1
            while right-left>len(s1):
                element = s2[left]
                freq2[element]-=1
                if freq2[element]==0:
                    del freq2[element]
                left+=1
            if len(s1)==right-left:
                if freq1==freq2:
                    return True
        return False
