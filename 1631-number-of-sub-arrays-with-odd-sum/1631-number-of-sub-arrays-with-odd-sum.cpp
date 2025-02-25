class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
         const int MOD = 1e9 + 7;
        int odd_count = 0, even_count = 1; // Start with even_count = 1 for empty prefix
        int prefix_sum = 0, result = 0;

        for (int num : arr) {
            prefix_sum += num;

            if (prefix_sum % 2 == 0) { 
                result = (result + odd_count) % MOD; // Odd subarrays end at current position
                even_count++; 
            } else { 
                result = (result + even_count) % MOD; // Even subarrays end at current position
                odd_count++; 
            }
        }
        return result;
    }
};