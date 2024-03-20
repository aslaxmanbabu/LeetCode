class Solution {
public:
    int majorityElement(vector<int>& nums) {
       map<int, int> max;
       int n = nums.size();
       int temp=0;

       if (n == 0) {
        return 0;
       }
       else if(n == 1) {
        return nums[0];
       } 

       for(int i=0; i<n; i++) {
        max[nums[i]]++;
       }

       map<int, int> :: iterator i = max.begin();

       while(i != max.end()) {
        if (i->second > n/2) {
            return i->first;
        }
        i++;
       } 

       return 0; 
    }
};