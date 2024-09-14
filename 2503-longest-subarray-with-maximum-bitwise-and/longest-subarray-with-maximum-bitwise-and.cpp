class Solution {
public:
    int longestSubarray(vector<int>& nums) {

        vector<int> temp(nums);
        int n = temp.size();
        sort(temp.begin(), temp.end());
        int maxN = temp[n-1], curr=nums[0], count=0, maxC=0 ;
        for(int i=0; i<n; i++) {
            if(curr==maxN && curr == nums[i]) {
                count++;
            }
            else {
                maxC = max(maxC, count);
                curr = nums[i];
                if(curr == maxN) {
                    count = 1;
                } 
                else {
                    count = 0;
                }
            }
        }
        
        return max(maxC, count);
    }
};