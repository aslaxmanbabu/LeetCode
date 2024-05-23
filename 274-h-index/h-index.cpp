class Solution {
public:
    int hIndex(vector<int>& citations) {
        vector<int> temp = citations;
        int max = 0;
        sort(temp.begin(), temp.end(), greater<int>());

        // if(temp.size() == 1) {
        //     if(temp[0] == 0) {
        //         return 0;
        //     }
        //     else {
        //         return 1;
        //     }
        // }

        for(int i=0; i<temp.size(); i++) {
            if(temp[i] < i) {
                return max;
            }
            max = (temp[i]>i)?i+1:i;
        }

        return max;
    }
};