class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int n1 = 0, n2 = 0;
        vector<int> r = {};
        while(n1 < m and n2 < n) {
            if(nums1[n1] > nums2[n2]) {
                r.push_back(nums2[n2++]);
            }
            else {
                r.push_back(nums1[n1++]);
            }
        }

        while(n1 < m) {
            r.push_back(nums1[n1++]);
        }

        while(n2 < n) {
            r.push_back(nums2[n2++]);
        }

        nums1 = r;
    }
};