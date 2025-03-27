class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int lo = lower_bound(nums.begin(), nums.end(), target) - nums.begin();
        int hi = lower_bound(nums.begin(), nums.end(), target + 1) - nums.begin();
        if (lo == hi) {
            return {-1, -1};
        }
        return {lo, hi - 1};
    }
};
