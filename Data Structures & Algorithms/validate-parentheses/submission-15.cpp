class Solution {
   public:
    bool isValid(string s) {
        std::stack<char> st;

        for (size_t i = 0; i < s.length(); i += 1) {
            if (st.empty()) {
                st.push(s[i]);
            } else {
                if (st.top() == '(' && s[i] == ')' || st.top() == '[' && s[i] == ']' ||
                    st.top() == '{' && s[i] == '}') {
                    st.pop();
                } else {
                    st.push(s[i]);
                }
            }
        }

        if (st.empty()) {
            return true;
        }

        return false;
    }
};
