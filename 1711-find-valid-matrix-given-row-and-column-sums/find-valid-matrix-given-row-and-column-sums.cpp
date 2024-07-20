class Solution {
public:
    vector<vector<int>> restoreMatrix(vector<int>& rowSum, vector<int>& colSum) {
        int r = rowSum.size(), c = colSum.size();
        vector<vector<int>> result(r, vector<int>(c, 0));
        
        for(int i=0; i<r; i++) {
            for(int j=0; j<c; j++) {
                result[i][j] = min(rowSum[i], colSum[j]);
                rowSum[i] -= result[i][j];
                colSum[j] -= result[i][j];
            }
        }
        // result.push_back(colSum);

        return result;
    }
};