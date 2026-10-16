// Last updated: 16/10/2026, 10:14:24
class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        vector<int>answer;
        vector<int>prefixXOR(arr.size()+1,0);
         
        for(int i = 0;i<arr.size();i++){
            prefixXOR[i+1]=prefixXOR[i]^arr[i];
        }
        for (auto it:queries){
            int l = it[0];
            int r =it[1];
           
            int XOR = prefixXOR[r+1]^prefixXOR[l];
            answer.push_back(XOR);
        }
        return answer;
    }
    
};