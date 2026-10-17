class Solution {
public:
    bool isPalindrome(string s) {
        std::erase_if(s, [](unsigned char c) {
            return !std::isalnum(c);
        });

        //std::cout << s << std::endl;  

        std::transform(s.begin(), s.end(), s.begin(), [](unsigned char c) {
            return std::tolower(c);
        });

        //std::cout << s << std::endl;

        std::string::iterator p1 = s.begin();
        std::string::iterator p2 = s.end() - 1;

        //std::cout << *p1 << endl;
        //std::cout << *p2 << endl;

        while (p1 < p2) {
            if (*p1 != *p2) {
                return false;
            }

            //std::cout << *p1 << std::endl;
            //std::cout << *p2 << std::endl;

            p1 += 1;
            p2 -= 1;
        }

        return true;
    }
};
