

class Solution {
public:
    string reverseWords(string s) {
        string result = "", temp = "";
        int n = s.size();
        for(int i=0; i<n; i++) {
            if(s[i] != ' ') {
                while((s[i] >= 'A' and s[i] <= 'z') || (s[i]>=48 and s[i]<=57)) {
                    temp += s[i];
                    i++; 
                }
                result = temp + " " + result;
                temp = "";
            }
            
            
        }

        result.pop_back();

        return result;
    }
};