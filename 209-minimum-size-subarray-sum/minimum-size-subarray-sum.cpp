class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int minN = INT_MAX, left = 0, right = 0, sum = 0;
        int count = 0;
        int n = nums.size();

        while(left<n || right < n) {
            if(sum<target and right<n) {
                sum += nums[right];
                right++;
            }
            else if(sum>=target and left<n) {
                minN = min(minN, right-left);
                sum -= nums[left];
                left++;
            }
            else {
                break;
            }
        }

        if(minN == INT_MAX) {
            minN = 0;
        }

        return minN;
    }
};