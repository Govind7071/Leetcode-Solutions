# Last updated: 27/09/2026, 21:59:05
class Solution:
    def minWindow(self, s: str, t: str) -> str:
        answer = ""
        if len(t)>len(s):
            return answer

        freq1 = {}
        i=0
        while i<len(t):
            freq1[t[i]]=freq1.get(t[i],0)+1
            i+=1

        left = 0
        right=0
        freq2 = {}
        minlen=len(s)+1
        while right<len(s):
            freq2[s[right]] = freq2.get(s[right],0)+1
            right+=1

            while all(freq2.get(key,0)>=value for key,value in freq1.items()):
                curr_len = right-left
                if curr_len<minlen:
                    minlen=curr_len
                    x = left
                    y = right

                element = s[left]
                freq2[element]-=1
                if freq2[element]==0:
                    del freq2[element]
                left+=1

        if minlen == len(s)+1:
            return answer
        while x<y:
            answer+=s[x]
            x+=1

        return answer
