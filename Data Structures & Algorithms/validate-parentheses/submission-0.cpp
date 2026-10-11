class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        unordered_set<char> opening{'(', '[', '{'};
        for (auto &c : s) {
            if (opening.find(c) != opening.end()) {
                st.push(c);
                continue;
            }

            if (st.empty()) return false;
            char open = st.top(); 
            st.pop();

            if ((c == ')' and open != '(') ||
                (c == ']' and open != '[') ||
                (c == '}' and open != '{')
            ) {
                return false;
            }
        }

        return st.empty();
    }
};
