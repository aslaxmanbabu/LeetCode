class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        long long r = 0;
        priority_queue<int> maxHeap(gifts.begin(), gifts.end());
        while(k--) {
            int x = maxHeap.top();
            maxHeap.pop();
            maxHeap.push(sqrt(x));
        }
        while(!maxHeap.empty()) {
            r += maxHeap.top();
            maxHeap.pop();
        }
        return r;
    }
};