class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string, vector<string>> mappedAnagrams;
        vector<vector<string>> result;

        for(int i = 0; i < strs.size(); i++) {
            string str = strs[i];
            sort(str.begin(), str.end());
            mappedAnagrams.try_emplace(str);
            mappedAnagrams[str].push_back(strs[i]);
        }

        for (auto const &p : mappedAnagrams) {
            result.push_back(p.second);
        }

        return result;
    }
};
