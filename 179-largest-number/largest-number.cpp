class Solution {
public:
    string largestNumber(vector<int>& nums) {
        vector<string> temp;
        string r = "";
        for(int i=0; i<nums.size(); i++) {
            temp.push_back(to_string(nums[i]));
        }

        sort(temp.begin(), temp.end(), [](string &a, string &b) {
            return a+b > b+a ;
        });

        if(temp[0] == "0") {
            return "0";
        }

        for(auto i : temp) {
            r += i;
        }

        return r;
    }
};