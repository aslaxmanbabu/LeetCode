class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        vector<int> result;
        int x;
        for(int i=0; i<queries.size(); i++) {
            x = 0;
            for(int j=queries[i][0]; j<=queries[i][1]; j++) {
                x ^= arr[j];
            }
            result.push_back(x);
        }
        return result;       
    }
};