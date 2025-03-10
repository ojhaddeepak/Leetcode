class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int lo = 0, hi = n - 1;
        
        // Step 1: Find Pivot (Index of Smallest Element)
        while (lo < hi) {
            int mid = lo + (hi - lo) / 2;
            if (nums[mid] > nums[hi]) lo = mid + 1;
            else hi = mid;
        }
        int pivot = lo;  

       
        lo = 0, hi = n - 1;
        if (target >= nums[pivot] && target <= nums[hi])
            lo = pivot;  
        else
            hi = pivot - 1;  
        while (lo <= hi) {
            int mid = lo + (hi - lo) / 2;
            if (nums[mid] == target) return mid;
            else if (nums[mid] < target) lo = mid + 1;
            else hi = mid - 1;
        }
        return -1;  
            }
};
