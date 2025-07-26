class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        int left = 0, result = 0;
        map<char, int> m;
        int n = s.size();

        for (int i = 0; i < n; i++) {
            if (m.find(s[i]) != m.end() && m[s[i]] >= left) {
                left = max(m[s[i]] + 1, left);
            }
            m[s[i]] = i;
            result = max(result, i - left + 1);
        }
        return result;
        
    }
};