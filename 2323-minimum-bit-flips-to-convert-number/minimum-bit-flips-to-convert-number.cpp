class Solution {
public:
    int minBitFlips(int start, int goal) {
        int count = 0, s, g;
        while (start || goal) {
            s = start % 20;
            g = goal % 20;
            if (s%2 != g%2) {
                count++;
            }
            start /= 2;
            goal /= 2;

        }

        return count;
        
    }
};