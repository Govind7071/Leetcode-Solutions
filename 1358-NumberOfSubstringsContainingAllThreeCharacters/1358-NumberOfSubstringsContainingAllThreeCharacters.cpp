// Last updated: 16/10/2026, 10:14:22
class Solution {
public:

    bool contains(unordered_map<char,int>&mp1,unordered_map<char,int>&mp2){
        for(auto [element,freq]:mp1){
            if(mp2[element]<freq){
                return false;
            }
        }
        return true;
    }
    int numberOfSubstrings(string s) {
        int left =0;
        int right=0;
        int count = 0;
        unordered_map<char,int>mp1={{'a',1},{'b',1},{'c',1}};
        unordered_map<char,int>mp2;
        while (right<s.size()){
            mp2[s[right]]++;
            right++;

            while(contains(mp1,mp2)){
                count+=s.size()-(right-1);

                char element = s[left];
                mp2[element]--;
                if(mp2[element]==0){
                    mp2.erase(element);
                }
                left++;
            }
        }
        return count;
    }

};