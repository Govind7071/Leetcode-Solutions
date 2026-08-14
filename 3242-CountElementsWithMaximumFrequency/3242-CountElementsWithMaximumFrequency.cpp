// Last updated: 14/08/2026, 13:15:15
class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int>freq;
        for (int i :nums)
        {
            freq[i]++;
        }
        int max = 0;
        
        for (auto i : freq)
        {
            if (i.second >max)
            max = i.second;

        }

        int count =0;
        for (auto i :freq )
        {
            if (max == i.second)
            count += i.second;
        }
        return count;

    }
};