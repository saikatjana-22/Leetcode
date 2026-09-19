class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {

        int n = matrix.size();
        int m = matrix[0].size();

        vector<vector<int>> result(m, vector<int>(n)); //eta karan n cross m er transpose m cross n hobe

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                result[j][i] = matrix[i][j];
            }
        }

        return result;
    }
};