class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int consec_ones = 0;
        int max_streak = 0;

        for (int num : nums) {
            if (num == 1) {
                consec_ones += 1;
                max_streak = std::max(max_streak, consec_ones);
            } else {
                consec_ones = 0;
            }
        }

        return max_streak;
    }
};