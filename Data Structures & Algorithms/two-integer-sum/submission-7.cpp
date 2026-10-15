class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> num_idx;
        
        for (int i = 0; i < nums.size(); i += 1) {
            int diff = target - nums[i];

            auto it = num_idx.find(diff);
            
            if (it == num_idx.end()) {
                num_idx[nums[i]] = i;
            } else {
                return {it->second, i};
            }
        }

        return {};
    }
};
