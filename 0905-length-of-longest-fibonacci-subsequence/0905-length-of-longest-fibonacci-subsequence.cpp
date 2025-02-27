class Solution {
public:
    int lenLongestFibSubseq(vector<int>& arr) {
        unordered_set<int> s(arr.begin(), arr.end());
        int n = arr.size();
        int max_len = 0;
        unordered_map<int, unordered_map<int, int>> dp;

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < i; ++j) {
                int x = arr[j], y = arr[i];
                if (s.count(x + y) && x + y > y) {
                    dp[y][x + y] = dp[x][y] ? dp[x][y] + 1 : 3;
                    max_len = max(max_len, dp[y][x + y]);
                }
            }
        }

        return max_len >= 3 ? max_len : 0;
    }
};
    