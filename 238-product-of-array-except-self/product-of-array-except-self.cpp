class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int mul = 1, c=0;
        vector<int> answer;
        c = count(nums.begin(), nums.end(), 0);
        if(c > 1) {
            for(int i=0; i<nums.size(); i++) {
                answer.push_back(0);
            }
        }
        else if (!c) {
            for(int i=0; i<nums.size(); i++) {
                mul = mul * nums[i];
            }
            
            for(int i=0; i<nums.size(); i++) {
                answer.push_back(int(mul/nums[i]));
            }
        }
        else {
            for(int i=0; i<nums.size(); i++) {
                if(nums[i] == 0) {
                    continue;
                }
                mul = mul * nums[i];
            }
            for(int i=0; i<nums.size(); i++) {
                if(nums[i] == 0) {
                    answer.push_back(mul);
                }
                else {
                    answer.push_back(0);
                }
            }
        }
        return answer;
    }
};