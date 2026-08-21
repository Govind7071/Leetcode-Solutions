# Last updated: 22/08/2026, 01:18:27
class Solution:
    def characterReplacement(self, s: str, k: int) -> int:
        left = 0
        right = 0
        max_freq = 0
        freq = {}
        max_len=0
        while right<len(s):
            char = s[right]
            freq[char] = freq.get(char,0)+1
            right+=1
            max_freq = max(max_freq,freq[char])

            while (right-left)-max_freq>k:
                element = s[left]
                freq[element]-=1
                if freq[element]==0:
                    del freq[element]
                left+=1
            max_len = max(max_len,right-left)
        return max_len

