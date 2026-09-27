# Last updated: 27/09/2026, 21:57:44
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
        