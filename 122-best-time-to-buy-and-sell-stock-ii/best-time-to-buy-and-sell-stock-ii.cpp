class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int buy = prices[0];
        int sell = 0;
        int result = 0;

        if (n == 1) {
            return 0;
        }
        for(int i=1; i<n; i++) {
            if(prices[i-1] > prices[i]) {
                sell = prices[i-1];
                result = result + (sell - buy);
                buy = prices[i];
            }
        }

        if (sell == 0) {
            sell = prices[n-1];
            result = sell - buy;
            return result;
        }

        if (sell != buy) {
            sell = prices[n-1];
            result = result + (sell - buy);
        }

        return result;
    }
};