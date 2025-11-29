1class Solution {
2public:
3    int romanToInt(string s) {
4        unordered_map<char, int> value{
5            {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50},
6            {'C', 100}, {'D', 500}, {'M', 1000}
7        };
8        
9        int result = 0;
10        for (int i = 0; i < s.length(); i++) {
11            // If next value is larger, subtract current
12            if (i + 1 < s.length() && value[s[i]] < value[s[i + 1]]) {
13                result -= value[s[i]];
14            } else {
15                result += value[s[i]];
16            }
17        }
18        return result;
19    }
20};
21