class Solution {
public:
    string rle(string s) {
        int count = 1;
        char flag = s[0];
        string x = "";
        for(int i=1; i<s.length(); i++) {
            if(flag != s[i]) {
                x += to_string(count) + flag;
                count = 1;
                flag = s[i];
            }
            else {
                count++;
            }
        }
        x += to_string(count) + flag;
        return x;
    }
    string countAndSay(int n) {

        if(n == 1) {
            return "1";
        }

        return rle(countAndSay(n-1));
    }
};