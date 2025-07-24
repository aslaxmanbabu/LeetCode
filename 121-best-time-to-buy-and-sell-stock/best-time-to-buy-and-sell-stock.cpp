class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxP = 0, minS = prices[0], n = prices.size();
        for(int i=0; i<n; i++) {
            maxP = max(maxP, prices[i]-minS);
            minS = min(minS, prices[i]);
        }
        return maxP;
    }
};