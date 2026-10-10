class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for (int i = 0; i < nums.size(); i++){
            int tempTarget = target - nums[i];
            for (int j = i+1; j < nums.size(); j++){
                if (nums[j] == tempTarget) {
                    vector<int> result{i, j};
                    return result;
                }
            }
        }
    }
};
