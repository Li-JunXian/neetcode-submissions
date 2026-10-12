class Solution {
public:
    bool isAnagram(string s, string t) {
        std::unordered_map<char, int> hash_map;

        for (char characters : s) {
            hash_map[characters] += 1;
        }

        for (char characters : t) {
            hash_map[characters] -= 1;
        }

        return !std::any_of(hash_map.begin(), hash_map.end(), [](const auto& pair) {
            return pair.second != 0;
        });
    }
};
