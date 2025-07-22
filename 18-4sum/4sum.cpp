class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> result;
        sort(nums.begin(), nums.end());
        int n = nums.size();
        for (int k = 0; k < n - 3; k++) {
            for (int i = k + 1; i < n - 2; i++) {
                // if (i > 0 && nums[i] == nums[i - 1])
                //     continue;

                long long int target2 =
                    (long long)target - (long long)nums[i] - (long long)nums[k];
                int left = i + 1, right = n - 1;
                int x;
                while (left < right) {
                    x = nums[left] + nums[right];
                    if (x == target2) {
                        result.push_back(
                            {nums[left], nums[right], nums[i], nums[k]});
                        while (left < right && nums[left] == nums[left + 1])
                            left++;
                        while (left < right && nums[right] == nums[right - 1])
                            right--;
                        left++;
                        right--;
                    } else if (x < target2) {
                        left++;
                    } else {
                        right--;
                    }
                }
                while (i + 1 < n && nums[i] == nums[i + 1])
                    i++;
            }
            while (k + 1 < n && nums[k] == nums[k + 1])
                k++;
        }

        return result;
    }
};