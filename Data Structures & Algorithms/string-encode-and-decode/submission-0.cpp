class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded = "";
        for (auto &s : strs) {
            encoded += to_string(s.length()) + ":" + s;
        }
        return encoded;
    }

    vector<string> decode(string s) {
        vector<string> decoded;
        int current = 0;
        while (current < s.length()) {
            int delim = s.find(':', current);
            int len = stoi(s.substr(current, delim - current));
            decoded.push_back(s.substr(delim + 1, len));
            current = delim + 1 + len;
        }

        return decoded;

    }
};
