// Last updated: 27/09/2026, 21:57:30
class Solution {
public:
    int minSubarray(vector<int>& nums, int p) {
        int minlen = INT_MAX;
        long long totalsum = 0;
        long long prefixsum = 0;
        unordered_map<int,int> mp;
        mp[0]=-1;
        for (int i = 0;i<nums.size();i++){
            totalsum+=nums[i];
        }
        int target = totalsum%p;
        if (target==0){
            return 0;
        }
        for (int i = 0;i<nums.size();i++){
            prefixsum+=nums[i];
            int rem = prefixsum%p;
            int req = (rem-target+p)%p;
            if(mp.find(req)!=mp.end()){
                int len = i - mp[req];
                minlen = min(minlen,len);
            }
            mp[rem]=i;

        }
        if (minlen == INT_MAX || minlen == nums.size()) {
             return -1;
        }

        return minlen;
    }
};