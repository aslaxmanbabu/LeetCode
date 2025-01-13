class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        vector<vector<int>> result;
        int n = nums.size(), i=0;
        sort(nums.begin(), nums.end());
        map<vector<int>, bool> flag;

        if((nums[0] < 0 && nums[n-1] < 0) || (nums[0] > 0 && nums[n-1] > 0)) {
            return result;
        }
        else if(nums[0] == 0 && nums[n-1] == 0) {
            result.push_back({0, 0, 0});
            return result;
        }

        while(i<n) {
            int left = i+1, right = n - 1;
            int target = nums[i];
            while( left < right ) {
                vector<int> temp;
                target = nums[i] + nums[left] + nums[right];
                if(target == 0) {
                    temp.push_back(nums[i]);
                    temp.push_back(nums[left]);
                    temp.push_back(nums[right]);
                    if (!flag[temp]) {
                        result.push_back(temp);
                        flag[temp] = true;
                    }
                    left++;
                    right--;
                    continue;
                }
                else if (target < 0) {
                    left++;
                }
                else {
                    right--;
                }
            }
            i++;
        }

        return result;
        
    }
};