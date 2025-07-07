class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char, int> r;
        if(s.size() != t.size()) {
            return false;
        }

        for(int i=0; i<s.size(); i++) {
            r[s[i]]++;
        }

        for(int i=0; i<t.size(); i++) {
            if(r[t[i]] <= 0) {
                return false;
            }
            else {
                r[t[i]]--;
            }
        }

        map<char, int> :: iterator it;
        for(it = r.begin(); it != r.end(); it++) {
            if(it->second > 0) {
                return false;
            }
        }

        return true;
    }
};