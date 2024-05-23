class Solution {
public:
    int jump(vector<int>& nums) {
        
        int count = 0, max = 0, i = 0, k = 0, x=0;
        int n = nums.size();
        if(n <= 1) {
            return 0;
        }
        while(i < n) {
            if (nums[i]+i >= n-1) {
                return count+1;
            }
            int max=0, ind;
            for(int j=nums[i]+i; j>i; j--) {
                if (nums[j]+j > max) {
                    max = nums[j]+j;
                    ind = j;
                }
            }
            i=ind;
            count++;
        }
        return count;
    }
};