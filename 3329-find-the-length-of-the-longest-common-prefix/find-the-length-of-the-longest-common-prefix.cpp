class Solution {
public:
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        int maxL = 0;
        map<int, int> r;
        for(int i=0; i<arr1.size(); i++) {
            int x = arr1[i];
            while(x) {
                if(r[x]) {
                    break;
                }
                else {
                    r[x] = to_string(x).size();
                }
                x = x/10;
            }
        }

        for(int i=0; i<arr2.size(); i++) {
            int x = arr2[i];
            while(x) {
                if(r[x]) {
                    maxL = max(maxL, r[x]);
                    break;
                }
                x = x/10;
            }
        }

        return maxL;
    }
};