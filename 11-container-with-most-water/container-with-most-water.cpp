class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int left = 0, right = n - 1;
        int maxQ = 0;
        while (left < right) {
            int small = min(height[left], height[right]);
            int amount = (right - left) * small;
            if (maxQ < amount) {
                maxQ = amount;
            }
            if (height[left] < height[right])
                left++;
            else
                right--;
        }
        return maxQ;
    }
};