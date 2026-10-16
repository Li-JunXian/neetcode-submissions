class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_map<int, size_t> num_freq;

        for (size_t i = 0; i < nums.size(); i += 1) {
            num_freq[nums[i]] += 1;
            
            if (num_freq[nums[i]] > 1) {
                return true;
            }
        }

        return false;
    }
};