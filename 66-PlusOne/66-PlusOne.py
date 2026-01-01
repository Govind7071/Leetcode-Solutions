# Last updated: 02/01/2026, 02:14:04
class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        string=""
        fin_list=[]
        for item in digits[0:]:
             string+=str(item)

        num=int(string)
        num+=1
        string_=str(num)
        for char in string_:
            fin_list.append(int(char))
        return fin_list
