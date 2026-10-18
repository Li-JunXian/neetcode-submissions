class Solution {
public:
    bool isPalindrome(string s) {
        const char* p1 = s.data();
        const char* p2 = p1 + s.size() - 1;

        while (p1 < p2) {
            unsigned char left = static_cast<unsigned char>(*p1);
            unsigned char right = static_cast<unsigned char>(*p2);

            if (!std::isalnum(left)) {
                p1++;
            } else if (!std::isalnum(right)) {
                p2--;
            } else {
                if (std::tolower(left) != std::tolower(right)) {
                    return false;
                }

                p1++;
                p2--;
            }
        }

        return true;
    }
};
