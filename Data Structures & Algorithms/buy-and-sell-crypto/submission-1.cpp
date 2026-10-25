class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if (prices.empty() || prices.size() == 1) {
            return 0;
        }

        int left = 0;
        int right = 0;
        int max_prof = 0;

        while (left < prices.size() && right < prices.size()) {
            int prof = prices[right] - prices[left];
            
            if (prof >= 0) {
                max_prof = (prof > max_prof) ? prof : max_prof;
                right += 1;
            } else {
                left += 1;
            }
        }

        return max_prof;
    }
};
