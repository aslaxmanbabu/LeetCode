class Solution {
public:
    int minimumLength(string s) {

        int r=0;
        map<char, int> alpha;
        int n = s.length();
        for(int i=0; i<n; i++) {
            alpha[s[i]]++;
        }

        map<char, int> :: iterator it;
        for(it = alpha.begin(); it != alpha.end(); it++) {
            if(alpha[it->first]%2 == 0) {
                r += 2;
            }
            else {
                r += 1;
            }
        }

        return r;
        
    }
};