// Last updated: 27/09/2026, 21:57:29
class Solution {
public:
    int secondHighest(string s) {
        
        int firstlar = -1;
        int seclar = -1;
        int j = 0;
        while (j<s.length()){
            if ((isdigit(s[j])) && s[j]-'0'>firstlar){
                
                seclar = firstlar;
                firstlar  = s[j]-'0';
            }
            if ((isdigit(s[j]))  && s[j]-'0'<firstlar){
                   if (s[j]-'0'>seclar){
                    seclar=s[j]-'0';
                   }
                
            }
            j++;
        }
        return seclar;
    }
};