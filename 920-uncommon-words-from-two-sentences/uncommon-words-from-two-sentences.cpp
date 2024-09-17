class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        map<string, int> common;
        string temp = "";
        vector<string> s1words, s2words;
        for(int i=0; i<s1.size(); i++) {
            if(s1[i] == ' ') {
                s1words.push_back(temp);
                common[temp]++;
                temp = "";
            }
            else{
                temp += s1[i];
            }
        }
        s1words.push_back(temp);
        common[temp]++;
        temp = "";
        for(int i=0; i<s2.size(); i++) {
            if(s2[i] == ' ') {
                s2words.push_back(temp);
                common[temp]++;
                temp = "";
            }
            else{
                temp += s2[i];
            }
        }
        s2words.push_back(temp);
        common[temp]++;
        vector<string> r;
        for(auto &it : common) {
            if(it.second == 1) {
                r.push_back(it.first);
            }
        }

        return r;
        
    }
};