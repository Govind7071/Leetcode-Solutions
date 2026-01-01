# Last updated: 02/01/2026, 02:13:57
class Solution:
    def uniqueOccurrences(self, arr: List[int]) -> bool:
        dic={}
        my_set=set()
        for item in arr:
            if item in dic:
                dic[item]+=1
            else :
                dic[item]=1

        for values in dic.values():
            my_set.add(values)
        if len(my_set)!=len(dic):
            return False
        return True
        