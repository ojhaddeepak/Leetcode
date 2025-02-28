class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.length() != t.length()) return false;
        
        vector<int> v1(256, -1);
        vector<int> v2(256, -1);
        
        for(int i = 0; i < s.length(); i++) {
            if(v1[s[i]] == -1 && v2[t[i]] == -1) {
                v1[s[i]] = t[i];
                v2[t[i]] = s[i];
            }
            else if(v1[s[i]] != t[i] || v2[t[i]] != s[i]) {
                return false;
            }
        }
        return true;
    }
};
