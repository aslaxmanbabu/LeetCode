class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int tank = 0, totalGas = 0, totalCost = 0;
        int n = gas.size();
        int start = 0;
        for(int i=0; i<n; i++) {
            totalGas = totalGas + gas[i];
            totalCost = totalCost + cost[i];
            tank = tank + gas[i] - cost[i];
            if (tank < 0) {
                start = i+1;
                tank = 0;
            }
        }

        return totalGas >= totalCost ? start : -1 ;
    }
};