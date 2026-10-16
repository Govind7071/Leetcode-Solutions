// Last updated: 16/10/2026, 10:14:30
class Solution {
public:
    int maximumSum(vector<int>& arr) {
        int answer = arr[0];
        int nodelete = arr[0];
        int onedelete = 0;
        for(int i = 1;i<arr.size();i++){
            // int previusnodelete = nodelete;
            onedelete = max(nodelete,onedelete+arr[i]);
            nodelete = max(arr[i],nodelete+arr[i]);
            
            answer = max(answer,max(nodelete,onedelete));
        }
        return answer;
    }
};