class Solution {
public:
    bool isValid(string s) {
        if (s.length() % 2 != 0) {
            return false;
        }
        
        std::stack<int> st;

        for (size_t i = 0; i < s.length(); i += 1) {
            char bkt = s[i];

            if (bkt == '(') {
                st.push(')');
            } else if (bkt == '[') {
                st.push(']');
            } else if (bkt == '{') {
                st.push('}');
            } else {
                if (st.empty() || bkt != st.top()) {
                    return false;
                }

                st.pop();
            }
        }

        return st.empty();
    }
};
