class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) {
            return false;
        } 

        std::vector<int> counts(26, 0);

        for (std::size_t i = 0; i < s.length(); i += 1) {
            counts[s[i] - 'a'] += 1;
            counts[t[i] - 'a'] -= 1;
        }

        for (int count : counts) {
            if (count != 0) {
                return false;
            }
        }

        return true;
    }
};
