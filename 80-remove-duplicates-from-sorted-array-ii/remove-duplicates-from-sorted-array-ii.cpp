class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        map<int, int> dup;
        
        for(int i=0; i<nums.size(); i++) {
            if(dup[nums[i]] < 2) {
                dup[nums[i]]++;
            }
            else {
                nums.erase(nums.begin()+i);
                i--;
            }
        }

        return nums.size();
    }
};