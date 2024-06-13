class Solution {
public:
    string convert(string s, int numRows) {
        string result = "";
        int col = s.size();
        char temp[numRows][col];
        int k = 0;
        
        fill(&temp[0][0], &temp[0][0] + numRows * col, '!');
        for(int j=0; j<col; j++) {
            int len = numRows - 2;
            for(int i=0; i<numRows; i++) {
                if(k < s.size()) {
                    temp[i][j] = s[k];
                    k++;
                }
            }
            if(len>0) {
                int i=numRows-1;
                while(len--) {
                    if (k<s.size()) {
                        temp[--i][++j] = s[k++];
                    }
                }
            }
        }
        for(int i=0; i<numRows; i++) {
            for(int j=0; j<col; j++) {
                if (temp[i][j] != '!') {
                    result += temp[i][j];
                }
                
            }
        }
        return result;
    }
};