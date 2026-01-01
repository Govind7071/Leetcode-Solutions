# Last updated: 02/01/2026, 02:13:58
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
