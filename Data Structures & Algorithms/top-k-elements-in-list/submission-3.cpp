class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> res;
        for (auto n : nums) {
            res[n]++;
        }

        vector<pair<int,int>> pairs(res.begin(), res.end());
        sort(pairs.begin(), pairs.end(), [](const pair<int, int> &a, const pair<int, int> &b){ return a.second > b.second; });

        vector<int> result; 
        for (int i = 0; i < k; i++) {
            result.push_back(pairs[i].first);
        }

        return result;
    }
};
