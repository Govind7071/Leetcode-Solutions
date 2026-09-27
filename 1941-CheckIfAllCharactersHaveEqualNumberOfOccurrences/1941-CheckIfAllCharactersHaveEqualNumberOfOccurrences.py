# Last updated: 27/09/2026, 21:57:27
class Solution:
    def areOccurrencesEqual(self, s: str) -> bool:
        # dic={}
        # for ch in s:
        #     if ch in dic:
        #         dic[ch] = dic[ch] + 1
        #     else:
        #         dic[ch] = 1

        # initial = None
        # initial = dic.get(s[0])

        # for v in dic.values():
        #     if initial != v:
        #         return False
            
        # return True
        dic={}
        for ch in s:
            if ch in dic:
                dic[ch]+=1
            else:
                dic[ch]=1
        initial=None
        initial=dic.get(s[0])
        for v in dic.values():
            # if initial is None:
            #     initial=v
            if initial!=v :
                return False
        return True


        
