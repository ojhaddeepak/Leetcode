class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> v; // Declare result vector

        int m = matrix.size();
        if (m == 0) return v; // Handle empty matrix case
        int n = matrix[0].size();

        int minr = 0, minc = 0;
        int maxr = m - 1, maxc = n - 1;

        while (minr <= maxr && minc <= maxc) {
            // Right traversal
            for (int j = minc; j <= maxc; j++) {
                v.push_back(matrix[minr][j]);
            }
            minr++; // Move down

            if (minr > maxr || minc > maxc) break;

            // Down traversal
            for (int i = minr; i <= maxr; i++) {
                v.push_back(matrix[i][maxc]);
            }
            maxc--; // Move left

            if (minr > maxr || minc > maxc) break;

            // Left traversal
            for (int j = maxc; j >= minc; j--) {
                v.push_back(matrix[maxr][j]);
            }
            maxr--; // Move up

            if (minr > maxr || minc > maxc) break;

            // Up traversal
            for (int i = maxr; i >= minr; i--) {
                v.push_back(matrix[i][minc]);
            }
            minc++; // Move right
        }

        return v;
    }
};