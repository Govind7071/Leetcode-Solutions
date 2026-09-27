// Last updated: 27/09/2026, 21:58:28
class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int,int>mp;
        mp[0]=-1;
        int count = 0;
        int maxlen=0;
        for(int i = 0;i<nums.size();i++){
            if(nums[i]==0){
                count--;
            }
            else{
                count++;
            }
            if(mp.find(count)!=mp.end()){
              int len = i -mp[count];
              maxlen = max(len,maxlen);
            }
            else{
            mp[count]=i;}
        }
        return maxlen;
    }
};