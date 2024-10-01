class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        vector<int> r(k, 0);
        for(int n : arr) {
            int rem = ((n%k) + k) % k;
            r[rem]++;
        }

        if(r[0]%2 != 0) {
            return false;
        } 

        for(int i=1; i<k; i++) {
            if(r[i] != r[k-i]) {
                return false;
            }
        }
        return true;
    }
};