class Solution {
public:
    bool isPerfectSquare(int num) {
        int root = sqrt(num);
        return root * root == num;
    }

    bool judgeSquareSum(int c) {
        long long left = 0, right = sqrt(c); // Use long long to prevent overflow

        while (left <= right) {
            long long sum = left * left + right * right;
            if (sum == c) return true;
            else if (sum < c) left++;  // Increase left to get a larger sum
            else right--;              // Decrease right to get a smaller sum
        }

        return false;
    }
};