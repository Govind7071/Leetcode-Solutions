# Last updated: 27/09/2026, 21:58:13
class Solution:
    def uncommonFromSentences(self, s1: str, s2: str) -> List[str]:
        l1=s1.split(" ")
        l2=s2.split(" ")
        result=[]
        for item in l1:
            if item not in l2 and l1.count(item)==1 :
                result.append(item)
        for item in l2 :
            if item not in l1 and l2.count(item)==1 :
                result.append(item)
        return result
