class Solution {
public:
    vector<int> minOperations(string boxes) {

        int n = boxes.length();
        vector<int> r(n, 0), temp;
        for(int i=0; i<n; i++) {
            if(boxes[i] == '1') {
                temp.push_back(i);
            }
        }

        for(int i=0; i<n; i++) {
            for(int j=0; j < temp.size(); j++) {
                r[i] += abs(i-temp[j]);
            }
        }

        return r; 
        
    }
};