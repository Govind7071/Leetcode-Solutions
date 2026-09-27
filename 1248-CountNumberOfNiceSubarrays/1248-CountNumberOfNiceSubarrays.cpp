// Last updated: 27/09/2026, 21:57:43
class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        long prefix = 0;
        unordered_map<int,int> mp;
        mp[0]=1;
        int count = 0;
        for (int i = 0;i<nums.size();i++){
            if (nums[i]%2==0){
                prefix+=0;
            }
            else{
                prefix+=1;
            }
            int req = prefix-k;
            if(mp.find(req)!=mp.end()){
                count+=mp[req];
            }
            mp[prefix]++;
        }
        return count;
    }
};