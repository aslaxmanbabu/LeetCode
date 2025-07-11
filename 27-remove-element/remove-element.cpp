class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int count = 0;
        for(int i=0; i<nums.size(); i++) {
            if(nums[i] == val) {
                nums[i] = 51;
            }
            else {
                count++;
            }
        }

        sort(nums.begin(), nums.end());
        return count;
    }
};