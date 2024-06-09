class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        string result = "", init, temp;
        int n = strs.size();
        init = strs[0];
        for(int i=0; i<init.size(); i++) {
            for(int j=0; j<n; j++) {
                temp = strs[j];
                if(init[i] != temp[i]) {
                    return result;
                }
            }
            result+=init[i];
        }

        return result;
        
    }
};