class Solution {
public:
    int maxProfit(vector<int>& prices) {
        size_t left = 0;
        size_t right = 1;
        int max = 0;

        while (right < prices.size()) {
            if (prices[right] < prices[left]) {
                left = right;
                right = left + 1;
            } else {
                max = std::max(max, prices[right] - prices[left]);
                right += 1;
            }
        }

        return max;
    }
};
