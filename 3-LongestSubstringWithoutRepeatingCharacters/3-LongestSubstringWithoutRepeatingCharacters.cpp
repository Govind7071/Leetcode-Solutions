// Last updated: 27/09/2026, 21:59:25
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left= 0;
        int right = 0;
        int maxLen = 0;
        unordered_map <char,int>mp;
        while (right<s.size()){
            char  element = s[right];
            mp[s[right]]++;
            right++;

            while (mp[element]>1){
                mp[s[left]]--;
                if (mp[s[left]]==0){
                    mp.erase(s[left]);
                }
                left++;
            }

            maxLen =max(maxLen,right-left);
    
        }
        return maxLen;
    }
};