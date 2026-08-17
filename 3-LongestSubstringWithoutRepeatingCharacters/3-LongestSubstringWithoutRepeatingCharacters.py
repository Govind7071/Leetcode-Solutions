# Last updated: 18/08/2026, 01:10:40
class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        left = 0
        right =0
        max_len =0
        freq={}

        while right<len(s):
            ch = s[right]
            freq[ch] = freq.get(ch,0)+1
            right+=1

            while freq[ch]>1:
                element = s[left]
                freq[element]-=1
                if freq[element]== 0:
                    del freq[element]
                left+=1
            max_len = max(max_len,right-left)

        return max_len