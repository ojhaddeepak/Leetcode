class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int m = matrix.size();//row
        int n = matrix[0].size();//colums
        vector<vector<int>> t(n, vector <int>(m));
        //storw
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                t[i][j] = matrix[j][i];
            }
        }
        return t;
    }
};