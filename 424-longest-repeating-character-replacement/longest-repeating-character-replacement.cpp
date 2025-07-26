class Solution {
public:
    int characterReplacement(string s, int k) {
        int left = 0, count = 0, freq = 0;
        int n = s.size();
        unordered_map<char, int> mapp;
        for (int i = 0; i < n; i++) {
            mapp[s[i]] += 1;
            count = max(count, mapp[s[i]]);
                // k--;
            if ((i-left+1-count) > k) {
                mapp[s[left]]--;
                // result = max(result, i - left + 1);
                left++;    
            }
            
            freq = max(freq, i - left + 1);
            
        }
        return freq;
    }
};