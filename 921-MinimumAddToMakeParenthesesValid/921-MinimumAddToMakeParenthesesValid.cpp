// Last updated: 16/10/2026, 10:14:49
class Solution {
public:
    int minAddToMakeValid(string s) {
        int count = 0;
        stack<char>st;
        for(int i = 0;i<s.size();i++){
           if(s[i]=='('){
            st.push(s[i]);
           }
           else{
            if(!st.empty()){
                st.pop();
            }
            else{
                count++;
            }
           }
        }
        return st.size()+count;
    }
};