class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(), people.end());
        int left = 0, right = people.size() - 1;
        int count = 0;

        while (left <= right) {
            if (people[left] + people[right] <= limit) {
                // Pair them together
                left++;
                right--;
            } else {
                // Heaviest person goes alone
                right--;
            }
            count++; // One boat used
        }
        return count;
    }
};
