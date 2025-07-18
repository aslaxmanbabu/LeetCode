class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k = 1, p = 1;
        int curr = nums[0];

        while (p < nums.size()) {
            if (nums[p] != curr) {
                nums[k++] = nums[p];
                curr = nums[p];
            }
            p++;
        }
        
        return k;
    }
};
