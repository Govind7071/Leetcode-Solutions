// Last updated: 16/10/2026, 10:15:00
class Solution {
public:
    bool checkValidString(string s) {

        stack<int> par;
        stack<int> star;

        for (int i = 0; i < s.size(); i++) {

            if (s[i] == '(') {
                par.push(i);
            }
            else if (s[i] == '*') {
                star.push(i);
            }
            else {
                if (!par.empty()) {
                    par.pop();
                }
                else if (!star.empty()) {
                    star.pop();
                }
                else {
                    return false;
                }
            }
        }

        while (!par.empty() && !star.empty()) {

            if (par.top() > star.top()) {
                return false;
            }

            par.pop();
            star.pop();
        }

        return par.empty();
    }
};