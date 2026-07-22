class Solution {
    int dayscal(vector<int>& weights, int capacity) {
        int sum = 0;
        int days = 1;
        for (auto it : weights) {
            sum += it;
            if (sum > capacity) {
                sum = it;
                days++;
            }
        }
        return days;
    }

public:
    int shipWithinDays(vector<int>& weights, int days) {
        int sum = 0;
        int maxu = INT_MIN;

        for (auto it : weights) {
            maxu = max(maxu, it);
            sum += it;
        }

        int low = maxu;
        int high = sum;

        while (low <= high) {
            int mid = low + (high - low) / 2;
            int totaldays = dayscal(weights, mid);

            if (totaldays > days)
                low = mid + 1;
            else
                high = mid - 1;
        }

        return low;
    }
};