// Last updated: 27/09/2026, 21:58:30
class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        long long prefix = 0;
        unordered_map<int,int>mp;
        mp[0]=-1;
        for (int i =0;i<nums.size();i++){
            prefix+=nums[i];
            int remainder = ((prefix%k)+k)%k;
            if(mp.find(remainder)!=mp.end()){
                int length = i - mp[remainder];
                if (length>=2){
                    return true;
                }
            }
            else{
                mp[remainder]=i;
            }
        }
        return false;
    }
};