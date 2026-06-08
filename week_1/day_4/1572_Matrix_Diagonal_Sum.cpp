class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n = mat.size();
        int sum1 = 0, sum2 = 0;

        for (int i = 0; i < n; i++) {
            sum1 += mat[i][i];
        }

        for (int i = 0; i < n; i++) {
            int j = n - 1 - i;
            if (i != j) { 
                sum2 += mat[i][j];
            }
        }

        return sum1 + sum2;
    }
};