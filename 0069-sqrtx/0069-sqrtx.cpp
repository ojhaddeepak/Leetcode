class Solution {
public:
    int mySqrt(int x) {
        int lo = 0;
        int hi = x;
        long long mid; 
        
        while (lo <= hi) {
            mid = lo + (hi - lo) / 2;  
            long long square = mid * mid;

            if (square == x) {
                return mid;  
            }
            else if (square > x) {
                hi = mid - 1;  
            }
            else {
                lo = mid + 1;  
            }
        }
        return hi;  
    }
};