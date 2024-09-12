class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        bool flag = false;
        map<char, bool> r;
        for(int i=0; i<allowed.size(); i++) {
            r[allowed[i]] = true;
        }
        int count = 0;
        for(int i=0; i<words.size(); i++) {
            for(int j=0; j<words[i].size(); j++) {
                if(!r[words[i][j]]) {
                    count++;
                    break;
                }
            }
        }
        return words.size()-count;
    }
};