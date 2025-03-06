class NumMatrix {
private:
    vector<vector<int>> prefixSum;

public:
    
    NumMatrix(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        prefixSum.resize(m + 1, vector<int>(n + 1, 0));

        
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                prefixSum[i + 1][j + 1] = matrix[i][j]
                                         + prefixSum[i + 1][j]
                                         + prefixSum[i][j + 1]
                                         - prefixSum[i][j];
            }
        }
    }

    
    int sumRegion(int row1, int col1, int row2, int col2) {
        return prefixSum[row2 + 1][col2 + 1]
             - prefixSum[row1][col2 + 1]
             - prefixSum[row2 + 1][col1]
             + prefixSum[row1][col1];
    }
};
