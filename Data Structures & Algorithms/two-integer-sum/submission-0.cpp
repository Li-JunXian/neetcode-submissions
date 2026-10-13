class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, int> num_idx;

        for (int i = 0; i < nums.size(); i += 1) {
            int diff = target - nums[i];
            
            if (num_idx.contains(diff)) {
                return {min(i, num_idx[diff]), max(i, num_idx[diff])};
            } else {
                num_idx[nums[i]] = i;
            }
        }

        return {};
    }
};
