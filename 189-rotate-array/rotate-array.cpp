class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> x;
        int n = nums.size();
        k = k % n;
        
        for(int i=n-k; i<n; i++) {
            x.push_back(nums[i]);
        }
        
        for(int i=0; i<n-k; i++) {
            x.push_back(nums[i]);
        }
        
        nums = x;
    }
};