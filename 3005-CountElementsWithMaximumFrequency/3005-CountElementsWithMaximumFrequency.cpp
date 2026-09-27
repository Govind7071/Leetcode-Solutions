// Last updated: 27/09/2026, 21:57:15
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