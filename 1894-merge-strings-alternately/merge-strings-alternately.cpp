class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int w1=0;
        int w2=0;
        int n1 = word1.size(), n2 = word2.size();
        string result = "";
        
        while(w1 < n1 or w2 < n2) {
            if(w1 < n1) {
                result += word1[w1++];
            }
            if(w2 < n2) {
                result += word2[w2++];
            }
            
        }

        return result;

    }
};