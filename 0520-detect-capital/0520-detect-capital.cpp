class Solution {
public:
    bool detectCapitalUse(string s) {
        if(isupper(s[0])) {
            int i;
            for(i=1;i<s.size();i++) {
                if(islower(s[i])) break;
            }
            if(i == s.size()) return true;
            for(i=1;i<s.size();i++) {
                if(isupper(s[i])) break;
            }
            if(i == s.size()) return true;
        }
        for(auto i : s) {
            if(isupper(i)) return false; 
        }
        return true;
    }
};