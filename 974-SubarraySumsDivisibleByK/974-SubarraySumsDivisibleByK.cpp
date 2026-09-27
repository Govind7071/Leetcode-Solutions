// Last updated: 27/09/2026, 21:58:00
class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int prefixsum = 0;
        unordered_map<int,int> mp;
        mp[0]=1;
        int count = 0;
        for (int i = 0;i<nums.size();i++){
            prefixsum+=nums[i];
            int rem = ((prefixsum%k)+k)%k;
            if(mp.find(rem)!=mp.end()){
               count+=mp[rem];
            }
            mp[rem]++;
        }
        return count;
    }
};