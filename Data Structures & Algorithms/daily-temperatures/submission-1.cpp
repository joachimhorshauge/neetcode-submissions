class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<long long> st;

        for (const string& tok : tokens) {
            if (tok.size() == 1 && string("+-*/").find(tok[0]) != string::npos) {
                long long right = st.top(); st.pop();
                long long left  = st.top(); st.pop();

                switch (tok[0]) {
                    case '+': st.push(left + right); break;
                    case '-': st.push(left - right); break;
                    case '*': st.push(left * right); break;
                    case '/': st.push(left / right); break;
                }
            } else {
                st.push(stoll(tok));
            }
        }
        return (int)st.top();
    }
};