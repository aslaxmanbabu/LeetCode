class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
        sort(nums.begin(), nums.end());
        int n = nums.size();
        for (int i = 0; i < n - 2; i++) {
            if (i > 0 && nums[i] == nums[i - 1]) continue;
            int left = i + 1, right = n - 1;
            int x;
            while (left < right) {
                x = nums[left] + nums[right] + nums[i];
                if (x == 0) {
                    result.push_back({nums[left], nums[right], nums[i]});
                    while (left < right && nums[left] == nums[left + 1])
                        left++;
                    while (left < right && nums[right] == nums[right - 1])
                        right--;
                    left++;
                    right--;
                } else if (x < 0) {
                    left++;
                } else {
                    right--;
                }
            }
        }
        return result;
    }
};