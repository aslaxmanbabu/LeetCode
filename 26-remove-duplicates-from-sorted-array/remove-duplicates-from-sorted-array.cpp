class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        map<int, bool> dup;
        for (int i=0; i<nums.size(); i++) {
            if (!dup[nums[i]]) {
                dup[nums[i]] = true;
            }
            else {
                nums.erase(nums.begin()+i);
                i--;
            }
        }
        return nums.size();
    }
};