class Solution {
public:
    int lengthOfLongestSubstring(string s) {
         int n = s.size(), ans = 0;

        for (int i = 0; i < n; i++) {
            unordered_set<char> vis;
            for (int j = i; j < n; j++) {
                if (vis.find(s[j]) != vis.end()) {
                    break;
                }
                vis.insert(s[j]);
                ans = max(ans, j - i + 1);
            }
        }

        return ans;
    }
};