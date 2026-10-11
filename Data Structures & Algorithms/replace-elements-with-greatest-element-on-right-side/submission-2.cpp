class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        if (arr.empty()) {
            return {};
        }
        
        int last_idx = arr.size() - 1;
        int curr_max = arr[last_idx];
        
        for (int i = last_idx; i >= 0; i--) {
            int tmp = arr[i];
            arr[i] = curr_max;
            curr_max = std::max(curr_max, tmp);
        }

        arr[last_idx] = -1;
        return arr;
    }
};