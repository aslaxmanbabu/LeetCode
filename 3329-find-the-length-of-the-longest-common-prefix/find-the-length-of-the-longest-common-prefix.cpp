class Solution {
public:
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        int maxL = 0;
        // for(int i=0; i<arr1.size(); i++) {
        //     string xx = to_string(arr1[i]);
        //     int x = xx.size();
        //     for(int j=0; j<arr2.size(); j++) {
        //         string yy = to_string(arr2[j]);
        //         for(int k=x; k>0; k--) {
        //             string s1 = xx.substr(0, k);
        //             string s2 = yy.substr(0, k);
        //             if (s1 == s2) {
        //                 maxL = max(maxL, k);
        //                 break;
        //             }
        //         }
        //     }
        // }

        map<int, int> r;
        for(int i=0; i<arr1.size(); i++) {
            int x = arr1[i];
            while(x) {
                if(!r[x]) {
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