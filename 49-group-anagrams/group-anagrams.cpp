class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string, vector<string>> r;

        for(int i=0; i<strs.size(); i++) {
            string x = strs[i];
            sort(x.begin(), x.end());

            if(r[x].size()) {
                r[x].push_back(strs[i]);
            }
            else {
                r[x] = {};
                r[x].push_back(strs[i]);
            }
        }

        map<string, vector<string>> :: iterator it;
        vector<vector<string>> result;
        for(it = r.begin(); it != r.end(); it++) {
            result.push_back(it->second);
        }

        return result;
    }
};