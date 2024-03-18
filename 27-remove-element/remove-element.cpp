class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        
        vector<int> temp;
        int ans = nums.size();
        for (int i=0; i<nums.size(); i++) {
            if(val == nums[i]) {
                nums.erase(nums.begin()+i);
                i--;
                ans--;
            }
        }
        return ans;

    }
};