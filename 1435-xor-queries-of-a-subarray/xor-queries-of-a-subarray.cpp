class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        vector<int> result, temp;
        int x;
        cout<<arr[0]<<" ";
        for(int i=1; i<arr.size(); i++) {
            arr[i] ^= arr[i-1];
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        for(const auto& q : queries ) {
            if(q[0] > 0) {
                cout<<(arr[q[0]-1] ^ arr[q[1]])<<" ";
                result.push_back(arr[q[0]-1] ^ arr[q[1]]);
            }
            else {
                cout<<arr[q[1]]<<" ";
                result.push_back(arr[q[1]]);
            }
        }
        return result;       
    }
};