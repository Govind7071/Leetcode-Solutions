// Last updated: 29/11/2025, 19:22:36
class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>m;
        for(int i=0;i<s.size();i++)
        m[s[i]]++;
        for(int i=0;i<t.size();i++)
        m[t[i]]--;
        for(auto itr:m)
        if(itr.second!=0)
        return false;
        return true;
    }
};