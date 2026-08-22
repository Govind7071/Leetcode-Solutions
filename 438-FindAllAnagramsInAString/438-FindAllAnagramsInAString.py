# Last updated: 22/08/2026, 22:28:40
class Solution:
    def findAnagrams(self, s: str, p: str) -> List[int]:
        i = 0
        left = 0
        right = 0
        mylist = []
        freqp ={}
        freqs={}
        while i<len(p):
            freqp[p[i]]= freqp.get(p[i],0)+1
            i+=1

        while  right<len(s):
            freqs[s[right]] = freqs.get(s[right],0)+1
            right+=1

            while right-left>len(p):
                element = s[left]
                freqs[element]-=1
                if freqs[element] == 0:
                    del freqs[element]
                left+=1
            if right-left==len(p):
                if freqp==freqs:
                    mylist.append(left)
        return mylist