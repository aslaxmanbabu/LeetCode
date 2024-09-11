class Solution {
public:
    int minBitFlips(int start, int goal) {
        int count = 0;
        int r = start ^ goal;

        while(r) {
            count += (r & 1);
            r = r>>1;
        }
        
        return count;
    }
};