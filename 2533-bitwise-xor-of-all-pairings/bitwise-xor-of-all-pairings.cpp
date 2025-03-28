class Solution {
public:
    int xorAllNums(vector<int>& nums1, vector<int>& nums2) {

        int xor1 = 0, xor2 = 0;

        for(int n1 : nums1) {
            xor1 ^= n1;
        }

        for(int n2 : nums2) {
            xor2 ^= n2;
        }

        if(nums1.size() % 2 == 0) {
            xor2 = 0;
        }

        if(nums2.size() % 2 == 0) {
            xor1 = 0;
        }

        return xor1 ^ xor2;
    }
};