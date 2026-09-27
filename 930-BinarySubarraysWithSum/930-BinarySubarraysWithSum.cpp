// Last updated: 27/09/2026, 21:58:05
class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int number = 0;
        long long prefix = 0;
        unordered_map<int,int> mp;
        mp[0]=1;
        for (int i = 0;i<nums.size();i++){
            prefix+=nums[i];
            long req =prefix-goal;
            if(mp.find(req)!=mp.end()){
                number+=mp[req];
            }
            mp[prefix]++;
        }
        return number;
    }
};