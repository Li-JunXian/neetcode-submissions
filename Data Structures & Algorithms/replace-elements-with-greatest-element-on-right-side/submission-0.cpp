class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        if (arr.empty()) {
            return vector<int>{};
        } else {
            int last_idx = arr.size() - 1;
            int curr_max = arr[last_idx];

            for (int i = last_idx - 1; i >= 0; i--) {
                if (arr[i] < curr_max) {
                    arr[i] = curr_max;
                } else {
                    int tmp;

                    tmp = arr[i];
                    arr[i] = curr_max;
                    curr_max = tmp;
                }
            }

            arr[last_idx] = -1;

            return arr;
        }
    }
};