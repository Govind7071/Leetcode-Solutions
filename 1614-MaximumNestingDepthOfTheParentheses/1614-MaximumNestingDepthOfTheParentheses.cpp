// Last updated: 16/10/2026, 10:14:16
class Solution {
public:
    int maxDepth(string s) {
        int count = 0;
        int maximum =INT_MIN;
        for (int i = 0;i<s.size();i++){
            if (s[i]=='('){
                count++;
            }
            else if (s[i]==')'){
                count--;
            }
            maximum = max(count,maximum);
        }
        return maximum;
    }
};