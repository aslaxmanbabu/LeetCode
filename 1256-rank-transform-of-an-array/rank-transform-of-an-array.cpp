class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> temp = arr, result;
        sort(temp.begin(), temp.end());
        map<int, int> r;
        int i = 1;
        for(int n : temp) {
            if(!r[n]) {
                r[n] = i;
                i++;
            }
        }

        for(int i=0; i<arr.size(); i++) {
            result.push_back(r[arr[i]]);
        }

        return result;
    }
};