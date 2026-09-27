// Last updated: 27/09/2026, 21:57:50
class Solution {
public:
    int numSubmatrixSumTarget(vector<vector<int>>& matrix, int target) {
        int count = 0;
        for (int top=0;top<matrix.size();top++){
            vector<int> ans(matrix[0].size(),0);
            for (int i = top;i<matrix.size();i++){
                
                int prefix= 0;
                unordered_map<int,int> mp;
                mp[0]=1;
                for (int j = 0; j < matrix[0].size(); j++) {
                    ans[j]+=matrix[i][j];
                    prefix+=ans[j];
                    int req = prefix-target;
                    if(mp.find(req)!=mp.end()){
                        count+=mp[req];
                    }
                    mp[prefix]++;
                }
            }
        }
        return count;
    }
};