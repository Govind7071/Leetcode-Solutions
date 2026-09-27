// Last updated: 27/09/2026, 21:58:27
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> mp ;
        mp[0]=1;
        int prefix_sum = 0;
        int count = 0;
        for(int i = 0;i<nums.size();i++){
            prefix_sum+=nums[i];
            int req = prefix_sum-k;
            if(mp.find(req)!=mp.end()){
                count+=mp[req];
            }
            mp[prefix_sum]++;
        }
        return count;
    }
};