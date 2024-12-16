class Solution {
public:
    int mini(vector<int> nums) {
        int ind = 0, m = nums[0];
        for(int i=1; i<nums.size(); i++) {
            if(nums[i] < m) {
                m = nums[i];
                ind = i;
            }
        }

        return ind;
    }
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        vector<int> temp = nums;
        int y;
        for(int i=0; i<k; i++) {
            y = mini(nums);
            nums[y] = nums[y] * multiplier;
        }

        return nums;
    }
};